/*
** my_aff_tab.c for  in /home/isidor_t/Jour02/isidor_t/my_aff_tab
** 
** Made by ISIDOR Teddy
** Login   <isidor_t@etna-alternance.net>
** 
** Started on  Thu Apr  2 09:35:35 2015 ISIDOR Teddy
** Last update Thu Apr  2 16:35:32 2015 ISIDOR Teddy
*/

char my_putchar(char c);

void my_aff_tab(char str[])
{
  int i;

  i = 0;
  while (str[i] != '\0')
  {
    my_putchar(str[i]);
    i++;
  }
}
