#include	<stdio.h> 
#include	<stdlib.h>
#include	<time.h>
#define		MIN 1
#define		MAX 100

/*
** Say to the player that the number he chose is bigger or smaller (or same) as the "nombre mystere"
*/
void	verif_choice(signed short p_player_choice, signed short p_number)
{
	if (p_player_choice > p_number)
		printf("Le nombre choisi est trop GRAND !\n");

	else if (p_player_choice < p_number)
		printf("le nombre choisi est trop PETIT !\n");

	else 
		printf("OH!\n");
}

/*
** Generate a random integer between MIN and MAX
*/
int 	gen_number()
{
	srand(time(NULL));
	return (rand() % (MAX - MIN + 1)) + MIN;
}

/*
** Main..	
*/
int	main(void)
{
	signed short	number;
	signed short	player_choice;
	signed int	count;
	char		*plural;

	plural = "s";
	count = 0;
	number = gen_number();
	printf("Bienvenue dans le jeu du PLUS OU MOINS !\n");
	printf("========================================\n");
	while(player_choice != number)
	{
		count++;
		printf("Entrez un nombre: ");
		scanf("%hd", &player_choice);
		getchar();
		verif_choice(player_choice, number);
	}

	if(count == 1)
		plural = "";

	printf("Bravo ! Vous avez trouvé ! Le nombre mystere etait %d ! Vous avez trouve en %d essai%s !\n", number, count, plural);
	return (0);
}
