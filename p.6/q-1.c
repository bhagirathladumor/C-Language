#include<stdio.h>

int main()
{
    char s[100];
    
    printf("enter your string: ");
    scanf("%[^\n]",&s);
    
    int len=0;
    for(int i=0;s[i]!='\0';i++)
    {
        len++;
    }
    printf("len =%d",len);

    int  i=0;
    int  j=len-1;
        while(i<j)
        {
        if(s[i]!=s[j])
        break;
        i++;
        j--;
        }
        if(i>=j)
        {
            printf("\t string is palindrome");
        }
        else
        {
            printf("\t string not  palindrome");  
        }
}