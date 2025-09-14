#include<stdio.h>
int find_sum(int);
int find_sum(int num)
    {
        if(num==1)
            return 1;
        else
            return num+find_sum(num-1);
    }
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    int result=find_sum(num);
    printf("Sum of %d numbers is:%d",num,result);
}