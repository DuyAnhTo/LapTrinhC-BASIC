#include <stdio.h>
#include <math.h>

int main()
{
    double x;
    printf("Nhap so can tinh: ");
    scanf("%lf", &x);
    for(int n=2;n<=4;n++)
    {
        int kq = (int)pow(x,n);
        printf("x^%d = %d\n", n, kq);
    }
    return 0;
}