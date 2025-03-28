#include <stdio.h>
#include <math.h>

int main()
{
    int number, sum=0;
    for(int i=0; i<10; i++)
    {
        printf("So thu %d: ", i+1);
        scanf("%d", &number);
        sum += number;
    }

    printf("Tong cua 10 so nguyen la: %d\n", sum);

    return 0;
}