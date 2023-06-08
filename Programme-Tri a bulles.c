#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n; int T[100]; int i,z;
	printf("Enter the number of elements in the table. \n");
 	scanf("%d",&n);

 	for(i=0;i<n-1;i++)
 	{
 		printf("Entre the element number %d : ", i+1);
 		scanf("%d",&T[i]);
	}

	int j=0;
	do
	{
		for(i=0; i<n-1; i++)
		{
			if(T[i]>T[i+1])
			{
				z=T[i];
				T[i]=T[i+1];
				T[i+1]=z;
			}
		}
		j++;
	}
	while(j<n-1);
	printf("\nYour table now presents like this: \n");
	for(i=0; i<n; i++)
	{
		printf("%d\n",T[i]);
	}

	return 0;

}
