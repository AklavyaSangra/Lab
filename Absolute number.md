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


Output of the program:


![image](https://github.com/AklavyaSangra/Lab/assets/146859465/43f11afc-ad8e-478c-870e-7ad8e11b1f20)

    
