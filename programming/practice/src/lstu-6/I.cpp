#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<string> text;
    
    string line;
    while (getline(cin, line)) {
        text.push_back(line);
        if (line.length() >= 4) {
            if (line.substr(line.length()-4, 4) == "end.") { break; }
        }
    }

    bool skip1 = false;
    bool skip2 = false;
    bool str = false;

    for (int i = 0; i < text.size();) {
        string *line = &text[i];
        
        for (int j = 0; j < line->length();) {
            if (skip1) {
                if (line->substr(j, 2) == "*)") { skip1 = false; line->erase(j, 2); }
                else { line->erase(j, 1); }
            }
            
            else if (skip2) {
                if (line->substr(j, 1) == "}") { skip2 = false; }
                line->erase(j, 1);
            }
            
            else {
                if (str) { 
                    if (line->substr(j, 1) == "'") { str = false; }
                    j++; 
                } else {
                    if (line->substr(j, 1) == "'") { str = true; j++; }
                    else if (line->substr(j, 2) == "(*") { skip1 = true; }
                    else if (line->substr(j, 1) == "{")  { skip2 = true; }
                    else if (line->substr(j, 2) == "//") { line->erase(j); }
                    else { j++; }
                }
            }
        }
        

        if (line->empty() and !str) { text.erase(text.cbegin()+i); }
        else { 
            if ((!skip1 and !skip2)) { line->push_back('\n'); }
            i++;
        }
    }

    for (int i = 0; i < text.size(); i++) { printf("%s", text[i].c_str()); }
    
    return 0;
}