#include <cstdio>
#include <cmath>

int main(int argc, char* argv[])
{
    double a = 0;
    double b = 0;
    double c = 0;

    scanf_s("%lf", &a);
    scanf_s("%lf", &b);
    scanf_s("%lf", &c);

    double d = b * b - 4 * a * c;
    if (a == b && b == c && c == 0)
    {
        printf("-1");
    }
    else if (a == b && b == 0)
    {
        printf("0");
    }
    else if (a == 0)
    {
        printf("1\n");
        printf("%f", -1.0 * c / b);
    }
    else if (d > 0)
    {
        printf("2\n");
        printf("%f\n", (-1.0 * b - sqrt(d)) / (2.0 * a));
        printf("%f", (-1.0 * b + sqrt(d)) / (2.0 * a));
    }
    else if (d == 0)
    {
        printf("1\n");
        printf("%f", (-1.0 * b) / (2.0 * a));
    }
    else {
        printf("0");
    }

    return 0;
}