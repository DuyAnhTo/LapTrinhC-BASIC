#include <stdio.h>

int main()
{

    int i, n;
    double sum=0, fact=1;
    printf("Nhap n: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        fact = fact * i;
        sum = sum + 1.0/fact;
    }
    printf("Tong 1+1/2!+...+1/n! =  %.2f", sum);

    return 0;
}