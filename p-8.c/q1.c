#include <stdio.h>

void main()
{
    char string[20];
    printf("Enter your string : ");
    scanf("%[^\n]", &string);

    char *ptr;
    ptr = &string[0];

    int len = 0;
    for (int i = 0; *(ptr + i) != '\0'; i++)
    {
        int mark = '0';
        if (*(ptr + i) == ' ')
        {
            mark = '1';
        }
        if (mark != '1')
        {
            len++;
        }
        mark = '0';
    }
    printf("The Length of String Without Counting Space \t: %d",len);
}