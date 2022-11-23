#include <stdio.h>
#include <math.h>

int main()
{

    double y, x, dx = 0.25, a = -3, b = 6;
    x = a;
    do {
        y = pow(x, 3);
        printf_s("______________________________\n| x = %.2lf | f(x) = %.6lf |\n", x, y);
        x += dx;
        
    } while (x <= b);
}


