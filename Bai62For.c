#include <stdio.h>

int main() {
    int n, sum = 1;

    printf("Nhap mot so nguyen duong: ");
    scanf("%d", &n);

    if (n <= 0) 
    {
        printf("So nhap vao phai la so nguyen duong.\n");
        return 1;
    }

    for (int i = 2; i <= n / 2; i++) 
    {
        if (n % i == 0) 
        {
            sum += i;
        }
    }
    sum += n;

    if (sum == 2 * n) 
    {
        printf("%d la so hoan hao.\n", n);
    } 
    else 
    {
        printf("%d khong phai la so hoan hao.\n", n);
    }

    return 0;
}