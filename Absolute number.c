Write a c code to check wheter a number is absolute or not.


    #include<stdio.h>
    void main()
    {
    int n;
    printf("enter the number");
    scanf("%d",&n);
    
        if(n<0)
    {
        n=n*(-1);
     printf("The absolute value of number is %d",n);
     }
    else
        {printf("The no is positive so the absolute value will remain same as the input ie %d",n);
        }
    }




    
