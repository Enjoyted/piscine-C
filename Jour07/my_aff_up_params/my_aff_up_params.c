/*
** aff_up_params.c for  in /home/isidor_t/Jour07/isidor_t/my_aff_up_params
** 
** Made by ISIDOR Teddy
** Login   <isidor_t@etna-alternance.net>
** 
** Started on  Tue Apr  7 10:44:47 2015 ISIDOR Teddy
** Last update Tue Apr  7 11:09:40 2015 ISIDOR Teddy
*/

char my_putchar(char c);

void my_aff_up_params(int n, char **tab)
{
  int i;
  int c;

  i = 0;
  while (i < n)
  {
    c = 0;
    while (tab[i][c] != '\0')
    {
      if (tab[i][c] >= 97 && tab[i][c] <= 122)
      {
	tab[i][c] = tab[i][c] - 32;
      }
      my_putchar(tab[i][c]);
      c++;
    }
    my_putchar('\n');
    i++;
  }
}
