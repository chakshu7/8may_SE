#include<stdio.h>
int main()
{
    int n;
    printf("Enter any number: ");
    scanf("%d",&n);
    while(n>0)
    {
        int r=n%10;
        printf("%d",r);
        n=n/10;
    }
}
