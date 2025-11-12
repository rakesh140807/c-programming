#include<stdio.h>
int main()
{
    int n;
    printf("enter an integer:");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("the given number is positive");
    }
    else
    {
        printf("the number is odd");
    }
    return 0;
}
