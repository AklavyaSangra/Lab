Write the c code to print all the even numbers between 1 to 100.


    #include<stdio.h>
    void main()
    {
    for(int i=1;i<=100;i++)
    {
        if(i%2==0)
        {
            printf(" %d",i);
        }
    }
    }

