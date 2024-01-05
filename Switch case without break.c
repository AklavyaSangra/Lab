


#include<stdio.h>

int main()
{

    char grade;
    printf("Enter your grade:\n");
    scanf("%c", &grade);

    switch(grade)
    {
        case 'A':
            printf("Excellent\n");
        case 'B':
            printf("Keep it up!\n");
        case 'C':
            printf("Case C : Well done !\n");
        case 'D':
            printf("Case D : You passed!\n");
        case 'F':
            printf("Case E : Better luck next time\n");
        default:
            printf("Default Case : Invalid grade\n");
    }
    printf("Your grade is %c\n",grade);
    
    return 0;
}
