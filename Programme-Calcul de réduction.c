#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	int a=0;
	printf("Entrez le prix du composant: \n");
	scanf("%d", &a);
	a=(a*0.2);
	printf("Le prix de reduction du composant est de %d. \n", a);

	return 0;
}