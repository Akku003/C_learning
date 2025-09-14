#include<stdio.h>
int count_digits(int);
int count_digits(int n)
{
    if(n==0)
        return 0;
    return 1+count_digits(n/10);
}
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    int count=count_digits(num);
    printf("Number of digits in %d is %d",num,count);
}