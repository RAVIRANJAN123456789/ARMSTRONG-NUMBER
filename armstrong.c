#include<stdio.h>
int armstrong(int n)
{
    int rem=0;int s=0;
    int temp=n;
    while(n>0)
    {
        rem=n%10;
        s=s+rem*rem*rem;
        n=n/10;
    }
    if(s==temp)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int n;
    printf("\n Enter the number to be checked as armstrong \n");
    scanf("%d",&n);
    if(armstrong(n)==1)
    {
        printf("\n Number is armmstrong \n");
    }
    else
    {
        printf("\n Number is not armmstrong \n");
    }
    return 0;
}
