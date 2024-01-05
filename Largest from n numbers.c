 C  program to find largest number among n user input numbers.


   #include<stdio.h>

int main()
{
    int n,i;
    float c,big;

    printf("Enter the number of elements you wish to find the greatest element of: ");
    scanf("%d", &n);
    printf("Enter %d numbers :\n", n);

    printf("Element 1:\n ");

    //Important step- always initialize big to the first element
    scanf("%f", &big);

    for(i = 2; i <= n; i++)
    {
        printf("Element %d  : \n", i);
        scanf("%f", &c);
        if(big < c)  
            big = c;    
    }

    printf("The largest of the %d numbers is  %f ", n, big);
    
    return 0;
}
