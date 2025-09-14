#include<stdio.h>
int factorial(int);
int factorial(int num)
{
    if(num==1)
        return 1;
    return num*factorial(num-1);
}
int main()
{
int num;
printf("Enter a number:");
scanf("%d",&num);
int result=factorial(num);
printf("Factorial of the number is:%d",result);
}