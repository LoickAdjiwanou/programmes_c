#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
	int a, val, tr, att, i, att2;
	printf("This is a number's riddle game.\n\n---MENU---\nChoose using the numbers:\n\n1- Play with a friend\n2- Play vs the computer\n\n");
	scanf("%d", &a);

	switch (a)
	{
		case 1:
		printf("You've chosen to play with a friend.\nIn this case, the player 1 has to enter the number to find and the number of attempts to try to find that number.\n\n");
		break;
	}



	if(a == 1)
	{
		printf("Player 1, enter the number to find:  ");
		scanf("%b", &val);
		printf("Now, player 1, enter the number of attempts the player 2 has to find the number:  ");
		scanf("%d", &att);
		printf("\n\n\n\n\nPlayer 1, now try to find player 1's number.You have %d attempts:\n\n", att);

		/*for(i = 0; i < att; i++)
		{
			printf("Enter the number:  ");
			scanf("%d", try);
			if(try < val)
			{
				att = att -1;
				printf("%d attempts left, your number is lower than the number to find. Try again:  ", att);
				scanf("%d", &try);
			}
			else if(try > val)
			{
				att = att -1;
				printf("%d attempts left, your number is higher than the number to find. Try again:  ", att);
				scanf("%d", &try);
			}
		}*/

		printf("Enter the number:  ");
		scanf("%d", tr);
		i = 0;
		att2 = att;

		do
		{

			if(tr < val)
			{
				att = att -1;
				printf("%d attempts left, your number is lower than the number to find. Try again:  ", att);
				scanf("%d", &tr);
			}
			else if(tr > val)
			{
				att = att -1;
				printf("%d attempts left, your number is higher than the number to find. Try again:  ", att);
				scanf("%d", &tr);
			}
			else if(tr == val)
			{
				printf("Congratulation, you've found the number !!!\n");
			}
			i++;
		}
		while(tr != val || i < att2);

		return 0;

	}
}
