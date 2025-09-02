#include<stdio.h>
int main()
{
    int number,p,k;
    printf("Number\tp\tk:");
    scanf("%d%d%d",&number,&p,&k);
    int i=((number/p)+1)*p;
    for(int c=0;c<k;c++)
    {
        printf("%d",i);
        i=i+p;
    }
    return 0;

    }

