#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    double sum= 0.0;
    printf("Nhap so n: ");
    scanf("%d", &n);
    for (int i=1;i<=n;i++)
    {
        sum += 1.0/i;
    }
    printf("Tong 1+1/2+...+1/n = %.2lf", sum);
    return 0;
}