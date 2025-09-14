#include<stdio.h>
#define N 50
int check_sorted(int[],int,int);
int check_sorted(int a[],int i,int n)
{
if(i!=n-1)
{
    if(a[i]>a[i+1])
        return 0;
    return check_sorted(a,i+1,n);
}
}
int main()
{
    int size,a[N];
    printf("Enter size of array:");
    scanf("%d",&size);
    printf("Enter the elements:\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    int i=0;
    int result=check_sorted(a,i,size);
    if(result!=0)
        printf("Sorted");
    else
        printf("Not sorted");
}