#include <stdio.h>
#include <math.h>

int main()
{
    int sum = 0;
    for(int i=0; i<100; i++)
    {
        if(i%2 != 0)
        {
            sum += i;
        }
    }
    printf("Tong cac so le tu 1 -> 100 la: %d", sum);
    return 0;
}