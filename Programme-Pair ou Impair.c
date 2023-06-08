#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	printf("Ce programme détermine si un nombre est pair ou impair\nCe programme envoie 1 si votre nombre est impair et 0 si il est pair\n\nEntrez votre nombre:");
	scanf("%d", &x);
	
	if(x%2=0){
		printf("0\n");
	}
	else{
		printf("1\n");
	}

	return 0;
}