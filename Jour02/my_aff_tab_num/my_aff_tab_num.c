/*
** my_aff_tab_num.c for  in /home/isidor_t/Jour02/isidor_t/my_aff_tab_num
** 
** Made by ISIDOR Teddy
** Login   <isidor_t@etna-alternance.net>
** 
** Started on  Thu Apr  2 10:05:14 2015 ISIDOR Teddy
** Last update Thu Apr  2 13:54:52 2015 ISIDOR Teddy
*/

char my_putchar(char c);

void my_aff_tab_num(int tab[], int size)
{
  int i;

  i = 0;
  while (i < size)
  {
    my_putchar(48 + tab[i]);
    my_putchar('\n');
    i++;
  }
}
