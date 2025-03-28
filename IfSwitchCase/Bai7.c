#include <stdio.h>

int main() 
{
    float diem;

    printf("Nhap diem cua ban: ");
    
    scanf("%f", &diem);

    if (diem < 0 || diem > 10) 
    {
        printf("Diem khong hop le\n");
    } 
    else 
    {
        if (diem < 5) 
        {
            printf("Xep loai: Yeu\n");
        } 
        else if (diem >= 5 && diem < 7) 
        {
            printf("Xep loai: Trung binh\n");
        } 
        else if (diem >= 7 && diem < 8) 
        {
            printf("Xep loai: Kha\n");
        } 
        else if (diem >= 8 && diem < 9) 
        {
            printf("Xep loai: Gioi\n");
        } 
        else if (diem >= 9) 
        {
            printf("Xep loai: Xuat sac\n");
        }
    }

    return 0;
}