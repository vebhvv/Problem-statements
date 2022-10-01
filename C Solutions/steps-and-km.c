#include <stdio.h>

int main ()
{
	int choice, data_in, steps, kms, run = 1;
	while(run)
	{
		printf("\nSelect any option from below\n");
		printf("\t1. Steps to KMs\n");
		printf("\t2. KMs to Steps\n");
		printf("\t3. Exit the program\n\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("\tEnter no. of Steps\n");
				scanf("%d",&steps);
				printf("\tNearly between %d and %d Meters\n",(int)(steps/1.43),(int)(steps/1.39));
				break;
		
			case 2:
				printf("\tEnter no. of Meters\n");
				scanf("%d",&kms);
				printf("\tNearly between %d and %d Steps\n",(int)(kms*1.39),(int)(kms*1.43));
				break;
		
			case 3:
				run = 0;
				break;
		
			default:
				printf("Please choose from given option\n");
			}
	}
}
