#include <stdio.h>
#include <math.h>

int main() 
{
    int number, i;
    int isPrime = 1;

    printf("Nhap mot so nguyen duong: ");
    scanf("%d", &number);

    if(number < 2) 
    {
        isPrime = 0;
    } 
    else 
    {
        for(i = 2; i <= sqrt(number); i++) 
        {
            if(number % i == 0) 
            {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime) 
    {
        printf("%d la so nguyen to.\n", number);
    } 
    else 
    {
        printf("%d khong phai la so nguyen to.\n", number);
    }

    return 0;
}