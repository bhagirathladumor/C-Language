#include<stdio.h>
void main()
{
    int year;
    printf("enter your year:=");
    scanf("year");
    if(year %4==0)
    {
        if(year %100==0)
        {
            if(year %400==0)
            {
                printf("leap");
            }
            else
            {
                printf("not leap");
            }
        }
        else
        {
            printf("leap");
        }
    }
    else
    {
        printf("not leap");
    }
}