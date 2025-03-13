#include <stdio.h>
#include <math.h>

int main() 
{
    double a, b, c;
    double d, e, f;
    double D, Dx, Dy;

    printf("Nhap he so a, b, c (phuong trinh 1): ");
    scanf("%lf %lf %lf", &a, &b, &c);
    printf("Nhap he so d, e, f (phuong trinh 2): ");
    scanf("%lf %lf %lf", &d, &e, &f);

    D = a * e - d * b;

    if (D == 0) 
    {
        if (a * f == d * c && b * f == e * c) 
        {
            printf("He phuong trinh co vo so nghiem.\n");
        }
        else
        {
            printf("He phuong trinh vo nghiem.\n");
        }
    } 
    else 
    {
        Dx = c * e - f * b;
        Dy = a * f - d * c;
        double x = Dx / D;
        double y = Dy / D;

        printf("Nghiem cua he phuong trinh la:\n");
        printf("x = %.2lf\n", x);
        printf("y = %.2lf\n", y);
    }
    return 0;
}