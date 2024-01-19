#include <iostream>
#include <cmath>

// ========================================================================================
//                                      TASK - 1
// ========================================================================================

void task_1() {
    int s; scanf("%d", &s);

    printf("V = %d\n", s*s*s);
    printf("S = %d\n", s*s*6);
}




// ========================================================================================
//                                      TASK - 2
// ========================================================================================

void task_2() {
    int a, d, n; scanf("%d%d%d", &a, &d, &n); 

    int resp = 0;
    for (int i = 0; i < n; i++) {
        resp += a + i*d;
    }

    printf("%d\n", resp);
}




// ========================================================================================
//                                      TASK - 3
// ========================================================================================

void task_3() {
    double x, y, z; scanf("%lf%lf%lf", &x, &y, &z);
    printf("%lf\n", pow(std::min(x + y/2 + z/4, x*y*z), 2) + 1);
}




// ========================================================================================
//                                      TASK - 4
// ========================================================================================

void task_4() {
    double x, y, z; scanf("%lf%lf%lf", &x, &y, &z);
    
    if (x+y+z < 1) {
        if      (x > y && x > z) { x = (y+z)/2; }
        else if (y > x && y > z) { y = (x+z)/2; }
        else if (z > x && z > y) { z = (x+y)/2; }
    } else {
        if (y < z) { y = x+z; }
        else { z = x+y; }
    }

    printf("%lf %lf %lf\n", x, y, z);
}




// ========================================================================================
//                                      TASK - 5
// ========================================================================================

void task_5() {
    double a, b, c; scanf("%lf%lf%lf", &a, &b, &c);
    double D = b*b - 4*a*c;

    if (D < 0) { printf("ERROR: Корней нет!\n"); }
    else if (D == 0) { printf("x = %lf\n", (-b)/2*a); }
    else {
        printf("x1 = %lf\n", (-b+sqrt(D))/2*a);
        printf("x2 = %lf\n", (-b+sqrt(D))/2*a);
    }
}





int main() {
    // task_1();
    // task_2();
    // task_3();
    // task_4();
    task_5();

    return 0;
}
