#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int nbr_aleatoire(int mi, int ma){
	int nbr_mystere = 0;
	srand(time(NULL));
	nbr_mystere = (rand()%(ma - mi+1))+mi;
	return nbr_mystere;
}

int main()
{
	int find=0, choix=0, att=0, level=0, val=0, nbr_mys=0, reprise=0;
	printf("This is a number riddle's game.\n\n---MENU---\n1- Play with a friend\n2- Play vs the computer\n\nChoose using the numbers: ");
	scanf("%d", &choix);

	switch (choix)
	{
		case 1:
		printf("\n\nYou've chosen to play with a friend.\nIn this case, the player 1 has to enter the number to find and the number of attempts to try to find that number.\n\n");
		break;

		case 2:
		printf("\n\nYou've chosen to play with the computer.\nIn this case, the computer will hasardly chose a number and you'll try to find it.\n\nWitch level do you want to play?\n1- Easy, 4 attemps;\n2- Medium, 7 attempts;\n 3- Hard, 10 attempts");
		printf("\nChoose a number: ");
		scanf("%d", &level);
		break;

		default:
		printf("Option not available !\nEnter a valid number or tap 0 to quit: ");
		main();
		break;
	}

	if(choix == 0){
		printf("See you !");
	}

	if(choix == 1)
	{
		printf("Player 1, enter the number to find:  ");
		scanf("%d", &val);
		printf("\nNow, player 1, enter the number of attempts the player 2 has to try to find the number:  ");
		scanf("%d", &att);
		printf("\n\n\nPlayer 1, now try to find player 1's number.You have %d attempts:\n\n", att);

		int i = 1;
		printf("This is your attempt n%d: ", i);
		scanf("%d", &find);
		if(find == val){
			printf("Congratulation, you've found player 1's number !!!");
		}
		else{
			do{
				if(find < val)
				{
					printf("%d attempts left, your number is lower than the number to find, try again:  ", att-i);
					scanf("%d", &find);
				}
				else if(find > val)
				{
					printf("%d attempts left, your number is higher than the number to find, try again:  ", att-i);
					scanf("%d", &find);
				}
				i++;
			}
			while(i<att && find!=val);

			if(find != val){
				printf("You didn't found player 1's number.\n\n");
			}
			else if(find == val){
				printf("Congratulation, you've found player 1's number !!!");
			}
		}
	}

	if(choix == 2){
		if(level == 1){
			int att = 4, a = 1;
			nbr_mys = nbr_aleatoire(1, 20);
			printf("The number to find is between 1 and 20, you have 4 attempts.\n\nAttempt n%d: ", a);
			scanf("%d", &find);
			if(find == nbr_mys){
				printf("Congratulation, you've found the number !!!");
			}
			else{
				do{
					if(find < nbr_mys){
						printf("%d attempts left, your number is lower than the number to find, try again:  ", att-a);
						scanf("%d", &find);
					}
					else if(find > nbr_mys){
						printf("%d attempts left, your number is higher than the number to find, try again:  ", att-a);
						scanf("%d", &find);
					}
					a++;
				}
				while(a<att && find!=nbr_mys);

				if(find != nbr_mys){
					printf("You didn't found the number.\n\n");
				}
				else if(find == nbr_mys){
					printf("Congratulation, you've found the number !!!");
				}
			}
		}
		else if(level == 2){
			int att = 7, a = 1;
			nbr_mys = nbr_aleatoire(1, 40);
			printf("The number to find is between 1 and 40, you have 7 attempts.\n\nAttempt number %d: ", a);
			scanf("%d", &find);
			if(find == nbr_mys){
				printf("Congratulation, you've found the number !!!");
			}
			else{
				do{
					if(find < nbr_mys){
						printf("The number you entered is lower than the number requested.\nAttempt n%d, try again: ", a);
						scanf("%d", &find);
					}
					else if(find > nbr_mys){
						printf("The number you entered is higher than the number requested.\nAttempt n%d, try again: ", a);
						scanf("%d", &find);
					}
					a++;
				}
				while(a<att && find!=nbr_mys);

				if(find != nbr_mys){
					printf("You didn't found the number.\n\n");
				}
				else if(find == nbr_mys){
					printf("Congratulation, you've found the number !!!");
				}
			}
		}
		else if(level == 3){
			int att = 10, a = 1;
			nbr_mys = nbr_aleatoire(1, 60);
			printf("The number to find is between 1 and 60, you have 10 attempts.\n\nAttempt number %d: ", a);
			scanf("%d", &find);
			if(find == nbr_mys){
				printf("Congratulation, you've found the number !!!");
			}
			else{
				do{
					if(find < nbr_mys){
						printf("The number you entered is lower than the number requested.\nAttempt n%d, try again: ", a);
						scanf("%d", &find);
					}
					else if(find > nbr_mys){
						printf("The number you entered is higher than the number requested.\nAttempt n%d, try again: ", a);
						scanf("%d", &find);
					}
					a++;
				}
				while(a<att && find!=nbr_mys);

				if(find != nbr_mys){
					printf("You didn't found the number.\n\n");
				}
				else if(find == nbr_mys){
					printf("Congratulation, you've found the number !!!");
				}
			}
		}
	}

	printf("\n\nDo you want to play again ?\n1- Yes\n2- No\nEnter a number: ");
	scanf("%d", &reprise);
	if(reprise == 1){
		main();
	}
	else{
		printf("\nSee you !\n");
	}

	return 0;

}
