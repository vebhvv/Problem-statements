// 2. wap to input a 3*3 array and print last column value each row
#include<stdio.h>
void main()
{
	int arr[3][3],i,j;
	for(i=0;i<=2;i++){
		printf("Enter the %d st rows : \n",i+1);
		for(j=0;j<=2;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
			if(i==2)
			printf("%d\t",arr[2][j]);
		}
		printf("\n");
	}
}
