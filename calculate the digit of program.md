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


    Output of the program:


![image](https://github.com/AklavyaSangra/Lab/assets/146859465/543f89fc-9c9c-4ce3-a301-833e5a29465a)
