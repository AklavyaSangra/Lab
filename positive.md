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


Output of the program:


![image](https://github.com/AklavyaSangra/Lab/assets/146859465/97780d3b-5cb5-40e9-9449-361542851b73)
