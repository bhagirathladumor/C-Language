#include<stdio.h>

int main()
{
    int size;
    printf("enter array size:\t");
    scanf("%d",&size);
   
    int a[size];
    for(int i=0;i<size;i++)
    {
        printf("a[%d]",i);
        scanf("%d",&a[i]);
    }
    printf("\n\n");
    printf("negative num :");
    for(int i=0;i<size;i++)
    {
        if(a[i]<0)
        {
            printf("%d,",a[i]);
        }
    }
}