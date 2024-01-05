Write a c code to check whether a digit is positive negative or zero.


    #include<stdio.h>
    void main()
    {   int n;
    printf("Enter the number:");
    scanf("%d",&n);
    if(n>0)
    {
        printf("The number is positive",n);
    }
        else if(n<0)
    {
        printf("The number is negative",n);
    }
    else
    {
        printf("The number entered is zero",n);
    }
    }



