Write a C program to know whether a shopkeeper has made a profit or loss.


    #include<stdio.h>
    void main()
    {
    int CP,SP,MARGIN;
    printf("Enter the selling price and cost price");
    scanf("%d%d",&SP,&CP);
    MARGIN=SP-CP;
    printf("The Margin is %d \n",MARGIN);
    if(MARGIN>0)
    {
        printf("The shopkeeper has made profit",MARGIN);
    }
    else if(MARGIN<0)
    {
        printf("The shopkeeper has suffered a loss",MARGIN);
    } else
    {
        printf("There is no profit or no loss.");
    }
    }


    Output of the program:


    ![image](https://github.com/AklavyaSangra/Lab/assets/146859465/b9859056-e02f-41d5-af9e-d3e4c5b8e6d5)
