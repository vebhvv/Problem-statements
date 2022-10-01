#include<stdio.h>

int main()
{
    int n,b,c;
    printf("enter an integer :: ");
    scanf("%d",&n);
    b = n+n*10;
    c = n+n*10+n*100;
    printf("%d",n+b+c);
    return 0;
}