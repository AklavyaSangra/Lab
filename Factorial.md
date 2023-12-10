Write a c program to calculate the factorial of numbers.


    #include<stdio.h>
    void main()
    {   int n;
    printf("Enter the number:");
    scanf("%d",&n);
    int product=1;
    for(int i=1;i<=n;i++)
    {
        product=product*i;
    }
    printf("the factorial of number is:%d",product);
    }


Output of the program:


![image](https://github.com/AklavyaSangra/Lab/assets/146859465/e12f2115-583b-442c-ad14-865076ab956e)
