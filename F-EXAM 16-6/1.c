#include<stdio.h>

int main(){
    int b;
    int marks[10];
    char grade;
    float avg;
    printf("Enter marks of 5 subjects: \n");
    for(int b = 0; b < 5; b++){
        printf("Sub %d: ", b + 1);
        scanf("%d", &marks[b]);
    }
    int sum = 0;
    for(int i = 0; i < 5; i++){
        sum += marks[i];
    }
    avg = sum / 5.0;
    printf("Average marks: %.2f\n", avg);
    if(avg >= 90){
        grade = 'A';
    } else if(avg>= 80){
        grade = 'B';
    }
    else if(avg >= 70){
        grade = 'C';
    } else if(avg >= 60){
        grade = 'D';
    } else if(avg >= 50){
        grade = 'E';
    } else {
        grade = 'F';
    }
    printf("Grade: %c\n\n", grade);

    
}