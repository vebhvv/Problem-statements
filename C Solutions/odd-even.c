#include<stdio.h>

int main()
{
    int a;
    printf("enter an integer :: ");
    scanf("%d",&a);
    printf("%d %s",a,(a%2==0)?"is even":"is odd");
    return 0;
}
