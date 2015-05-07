/*
** my_trspos_tab.c for  in /home/isidor_t/Jour03/isidor_t/my_trspos_tab
** 
** Made by ISIDOR Teddy
** Login   <isidor_t@etna-alternance.net>
** 
** Started on  Fri Apr  3 13:44:17 2015 ISIDOR Teddy
** Last update Fri Apr  3 14:39:07 2015 ISIDOR Teddy
*/

char my_putchar(char c);

void my_trspos_tab(int c, int l, int tab[l][c])
{
  int i;
  int x;

  for (i = 0; i < c; i++)
  {
    for (x = 0; x < l; x++)
    {
      my_putchar(48 + tab[x][i]);
    }
    my_putchar('\n');
  }
}
