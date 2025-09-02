#include<stdio.h>
int main()
{
    int number;
    char a[][5]={"even","odd"};
    printf("Number:");
    scanf("%d",&number);
    // printf("%d is %s",number,a[number%2]); 
    printf("%d is %s",number,a[number&1]); 
}
