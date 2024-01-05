Write the c program to calculate the no of digit of the program.


    #include<stdio.h>
    void main()
    {
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    int count=0;
    while(n!=0)
    {
        n=n/10;
        count++;
    }
    printf("the total number of digits is:%d",count);
    }


    
