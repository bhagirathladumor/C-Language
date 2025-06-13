#include <stdio.h>

struct StudentsMarks
{
    int roll_no;
    char name[50];
    int gujarati ;
    int science ;
    int sp;
    int total;
    float percentage;
};


void main() {
    int n;
    printf("Enter Number of Students : ");
    scanf("%d",&n);

    struct StudentsMarks s1[n];
    int max = 300;

    printf("\n\nEnter Students Details\n\n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter Details of Studend : %d\n",i + 1);
        printf("Roll No => ");
        scanf("%d",&s1[i].roll_no);

        printf("Name => ");
        scanf(" %[^\n]",&s1[i].name);

        printf("gujarati Marks => ");
        scanf("%d",&s1[i].gujarati);

        printf("science Marks => ");
        scanf("%d",&s1[i].science );

        printf("sp Marks => ");
        scanf("%d",&s1[i].sp );

        printf("\n");
        printf("---------------------");
        printf("\n\n");

        s1[i].total = s1[i].gujarati + s1[i].science+ s1[i].sp;
        s1[i].percentage = (s1[i].total * 100) / max;
    }
    printf("\n\n\nOutput of Students Total And Percentage\n\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s (%d)\n",s1[i].name, s1[i].roll_no);
        printf("Chemistry => %d\n",s1[i].gujarati );
        printf("Mathematics => %d\n",s1[i].science);
        printf("Physics => %d\n",s1[i].sp);
        printf("Total Marks => %d/%d\n",s1[i].total, max);
        printf("Percentage => %.2f%%\n",s1[i].percentage);
        printf("\n\n");
        printf("--------------------------------------------------");
        printf("\n\n\n");
    }
    
}