/*
** my_sort_int_tab.c for  in /home/isidor_t/Jour04/isidor_t/my_sort_int_tab
** 
** Made by ISIDOR Teddy
** Login   <isidor_t@etna-alternance.net>
** 
** Started on  Mon Apr  6 09:21:22 2015 ISIDOR Teddy
** Last update Mon Apr  6 17:20:17 2015 ISIDOR Teddy
*/

void my_sort_int_tab(int *tab, int size)
{
  int i;
  int tmp;
  int c;

  c = 0;
  while (c < size)
  {
    for (i = 0; i < size; i++)
    {
      if (tab[i] > tab[c])
      {
	tmp = tab[i];
	tab[i] = tab[c];
	tab[c] = tmp;
      }
    }
    c++;
  }
}
