#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int s=1;s<=i-1;s++)
        {
            printf(" ");
        }
        for(int j=n-i+1;j>=1;j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}