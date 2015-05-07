/*
** demineur.c for  in /home/isidor_t/demineur
** 
** Made by ISIDOR Teddy
** Login   <isidor_t@etna-alternance.net>
** 
** Started on  Mon Apr 13 11:13:51 2015 ISIDOR Teddy
** Last update Mon Apr 13 21:15:04 2015 ISIDOR Teddy
*/

#include <stdio.h>
#include <stdlib.h>
char *readLine();
int randomnumber();

void add_mines(int **tab, int nbmines, int x, int y)
{
  int randx;
  int randy;
  int used;
  int i;

  used = 0;
  while (nbmines != 0)
  {
    randx = randomnumber(x);
    randy = randomnumber(y);
    if(tab[randx][randy] != -1)
    {
      tab[randx][randy] = -1;
      for(i = -1;i < 2;i++)
      {
	if ((randx - 1 >= 0 && randx - 1 < x) && (randy + i >= 0 && randy + i < y)
	    && tab[randx - 1][randy + i] != -1)
        {
	  tab[randx - 1][randy + i] = tab[randx - 1][randy + i] + 1;
	}
	if ((randx + 1 >= 0 && randx + 1 < x) && (randy + i >= 0 && randy + i < y)
	    && tab[randx + 1][randy + i] != -1)
        {
	  tab[randx + 1][randy + i] = tab[randx + 1][randy + i] + 1;
	}
      }
      if ((randx >= 0 && randx < x) && (randy - 1 >= 0 && randy - 1 < y)
	  && tab[randx][randy - 1] != -1)
      {
	tab[randx][randy - 1] = tab[randx][randy - 1] + 1;
      }
      if ((randx >= 0 && randx < x) && (randy + 1 >= 0 && randy + 1 < y)
	  && tab[randx][randy + 1] != -1)
      {
	tab[randx][randy + 1] = tab[randx][randy + 1] + 1;
      }
      nbmines--;
    }
  }
}

void print_game(int **tab, int x, int y)
{
  int i;
  int c;
  int n;
  n = 0;
  c = 0;
  my_putstr("   | ");
  while (n < x)
  {
    (n < 9) ? my_putstr("0") : my_putstr("");
    my_put_nbr(n + 1);
    my_putstr(" | ");
    n++;
  }
  while(c < y)
  {
    (c < 9) ? my_putstr("0") : my_putstr("");
    my_put_nbr(c + 1);
    my_putstr(" | ");
    i = 0;
    while (i < x)
    {
      my_put_nbr(tab[i][c]);
      (tab[i][c] < 0) ? my_putstr(" | ") : my_putstr("  | ");
      i++;
    }
    my_putchar('\n');
    c++;
  }
  my_putchar('\n');
}

int *init_game(int **tab, int x, int y)
{
  int i;
  int c;

  i = 0;
  c = 0;
  while (i < x)
  {
    c = 0;
    tab[i] = malloc(y * sizeof(int));
    while (c < y)
    {
      tab[i][c] = 0;
      c++;
    }
    i++;
  }
  return tab;
}

int user(int **tab)
{
  char entree[50];
  char **arr;

  my_strcpy(entree, readLine());

  if(my_strcmp(entree, "quit") == 0)
  {
    my_putstr("Ciao ! \n");
    return (0);
  }
  arr = my_str_to_wordtab(entree);

  if(tab[my_getnbr(arr[0])][my_getnbr(arr[1])] == -1)
  {
    my_putstr("You lost...Rip.\n");
    return (0);
  }
  

  return (1);
}

int main(int argc, char **argv)
{
  int x;
  int y;
  int nbmines;
  int **tab;
  int game;

  if (argc <= 2)
  {
    my_putstr("/!\\\nProvide enough parameters to setup the demineur.\n/!\\\n");
    exit(0);
  }
  game = 1;
  x = my_getnbr(argv[1]);
  y = my_getnbr(argv[2]);
  nbmines = (x * y) / 10;
  srand (time (NULL));
  tab = malloc(x * sizeof(int *));
  tab = init_game(tab, x, y);
  add_mines(tab, nbmines, x, y);
  print_game(tab, x, y);
  while (game == 1)
    game = user(tab);
  return (0);
}
