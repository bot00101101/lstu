#include <stdio.h>
#include <string>
#include <cmath>


/* double to exponental */
std::string to_exponental(double d) {
    int exponent = (int) floor(log10(std::fabs(d)));
    double base = d * std::pow(10, -1.0 * exponent);

    char sign; if (exponent >= 0) { sign = '+'; } else { sign = '-'; } 
    return std::to_string(base) + "E" + sign + std::to_string(exponent);
}


/* product of numbers */
double F(double *x, int size) {  
    double response = 1.0;
    for (int i = 0; i < size; i++) { response *= x[i]; }
    return response;
}


double G(double x) {
    if (x < 15) { return 5*std::pow(x, 2) + 21*x; }
    else if (15 <= x && x < 60) { return x - (11/(x-5)); }
    else { return 1 + (x/(x+1)); }
}


int main() {    
    const int N = 10;
    const double S = 39.5;

    /* task 1 */
    double X[N] = {};
    printf("Enter start number: "); scanf("%lf", &X[0]);
    for (int i = 1; i < N; i++) { X[i] = S * (double) i + X[0]; }

    /* task 2 */
    printf("\nF(x): %s\n\n", to_exponental(F(X, N)).c_str());

    /* task 3 */
    double Y[N] = {};
    for (int i = 0; i < N; i++) {
        Y[i] = G(X[i]);
        printf("y%d: %.3lf\n", i+1, Y[i]);
    }

    return 0;
}