write a c code to find greatest of two numbers.


  #include<stdio.h>
void main(){
    int a,b,big;
    printf("enter the numbers");
    scanf("%d%d",&a,&b);
    big=a>b?a:b;
    printf("the greatest no is=%d",big);
}
