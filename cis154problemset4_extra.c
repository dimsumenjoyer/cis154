/*
Victor Van
00319912
Problem Set 4, Extra Problem
C - Professor Penta
2/19/2024, Due: 2/20/2024
*/

#include <stdio.h>

int main(void);
int convert_month_to_word(int month);

int main(void)
{
    convert_month_to_word(16);
    convert_month_to_word(4);
    convert_month_to_word(12);
    return 0;
}

int convert_month_to_word(int month)
{
    switch (month)
    {
        case 1:
            printf("January/Tháng Một/一月\n");
            break;
        case 2:
            printf("February/Tháng Hai/二月\n");
            break;
        case 3:
            printf("March/Tháng Ba/三月\n");
            break;
        case 4:
            printf("April/Tháng Bốn/四月\n");
            break;
        case 5:
            printf("May/Tháng Năm/五月\n");
            break;
        case 6:
            printf("June/Tháng Sáu/六月\n");
            break;
        case 7:
            printf("July/Tháng Bảy/七月\n");
            break;
        case 8:
            printf("August/Tháng Tám/八月\n");
            break;
        case 9:
            printf("September/Tháng Chín/九月\n");
            break;
        case 10:
            printf("October/Tháng Mười/十月\n");
            break;
        case 11:
            printf("November/Tháng Mười Một/十一月\n");
            break;
        case 12:
            printf("December/Tháng Mười Hai/十二月\n");
            break;
        default:
            printf("Error: Invalid Number!\n");
            break;
    }
}