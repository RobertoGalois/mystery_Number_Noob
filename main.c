  1 #include    <stdio.h>
  2 #include    <stdlib.h>
  3 #include    <time.h>
  4 #define     MIN 1
  5 #define     MAX 100
  6 
  7 
  8 void    verif_choice(signed short p_player_choice, signed short p_number)
  9 {
 10     if (p_player_choice > p_number)
 11         printf("Le nombre choisi est trop GRAND !\n");
 12 
 13     else if (p_player_choice < p_number)
 14         printf("le nombre choisi est trop PETIT !\n");
 15 
 16     else
 17         printf("OH!\n");
 18 }
 19 
 20 int     gen_number()
 21 {
 22     srand(time(NULL));
 23     return (rand() % (MAX - MIN + 1)) + MIN;
 24 }
 25 
 26 int     main(void)
 27 {
 28     signed short    number;
 29     signed short    player_choice;
 30     signed int      count;
 31     char            *plural;
 32 
 33     plural = "s";
 34     count = 0;
 35     number = gen_number();
 36     printf("Bienvenue dans le jeu du PLUS OU MOINS !\n");
 37     printf("========================================\n");
 38     while(player_choice != number)
 39     {
 40         count++;
 41         printf("Entrez un nombre: ");
 42         scanf("%hd", &player_choice);
 43         getchar();
 44         verif_choice(player_choice, number);
 45     }
 46 
 47     if(count == 1)
 48         plural = "";
 49     
 50     printf("Bravo ! Vous avez trouvé ! Le nombre mystere etait %d ! Vous avez trouve en %d essai%s !\n", number, count, plural);
 51     return (0);
 52 }
