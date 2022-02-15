
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{

    int num,bit;

    printf("Clear nth bit of a number. Enter number (0-255):\n");
    scanf("%d",&num);

    printf("Enter the bit number you want cleared (0-7):\n");
    scanf("%d", &bit);


    switch(bit)
    {
        case 0:
        num=num^1;
        printf("Bitul a fost transformat. Noul nr este: %d", num);
        break;

        case 1:
        num=num^2;
        printf("Bitul a fost transformat. Noul nr este: %d", num);
        break;

        case 2:
        num=num^4;
        printf("Bitul a fost transformat. Noul nr este: %d", num);
        break;

        case 3:
        num=num^8;
        printf("Bitul a fost transformat. Noul nr este: %d", num);
        break;

        case 4:
        num=num^16;
        printf("Bitul a fost transformat. Noul nr este: %d", num);
        break;

        case 5:
        num=num^32;
        printf("Bitul a fost transformat. Noul nr este: %d", num);
        break;

        case 6:
        num=num^64;
        printf("Bitul a fost transformat. Noul nr este: %d", num);
        break;

        case 7:
        num=num^128;
        printf("Bitul a fost transformat. Noul nr este: %d", num);
        break;

        default:
            printf("Eroare, nr introdus nu se afla in valorile cerute.");
    }

    return 0;
}