#include<stdio.h>

int main()
{
    //initializing
    int n,b,c;
    
    //get inputs
    printf("please enter an integer = ");
    scanf("%d",&n);
    
    //logics
    b = n+n*10;
    c = n+n*10+n*100;
    
    //printing function and output
    printf("Answer is %d",n+b+c);
    
    return 0;
}

//output
//please enter an integer = 5
//Answer is 615
