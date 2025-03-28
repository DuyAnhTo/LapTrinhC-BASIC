#include <stdio.h>
#include <math.h>

void tinhToan(double a, double b, double c)
{
    double chuVi=a+b+c, p;
    p = chuVi/2;
    double dienTich = sqrt(p*(p-a)*(p-b)*(p-c));
    printf("Chu vi tam giac: %.2lf\n", chuVi);
    printf("Dien tich tam giac: %.2lf\n", dienTich);

}
int main()
{
    double a, b, c;
    printf("Nhap lan luot 3 canh cua tam giac: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    
    if(a + b <= c || a + c <= b || b + c <= a)
    {
        printf("(%.2lf, %.2lf, %.2lf) khong phai la tam giac\n", a, b, c);
    }
    else
    {
        if(a == b && b == c)
        {
            printf("(%.2lf, %.2lf, %.2lf) la tam giac deu\n", a, b, c);
        }
        else if((a * a + b * b == c * c || a * a + c * c == b * b || c * c + b * b == a * a) && (a == b || b == c || a == c))
        {
            printf("(%.2lf, %.2lf, %.2lf) la tam giac vuong can\n", a, b, c);
        }
        else if(a * a + b * b == c * c || a * a + c * c == b * b || c * c + b * b == a * a)
        {
            printf("(%.2lf, %.2lf, %.2lf) la tam giac vuong\n", a, b, c);
        }
        else if(a == b || b == c || a == c)
        {
            printf("(%.2lf, %.2lf, %.2lf) la tam giac can\n", a, b, c);
        }
        else
        {
            printf("(%.2lf, %.2lf, %.2lf) la tam giac thuong\n", a, b, c);
        }
    }
    tinhToan(a, b, c);
    return 0;
}