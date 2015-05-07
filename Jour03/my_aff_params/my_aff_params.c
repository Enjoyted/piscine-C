/*
** my_aff_params.c for  in /home/isidor_t/Jour03/isidor_t/my_aff_params
** 
** Made by ISIDOR Teddy
** Login   <isidor_t@etna-alternance.net>
** 
** Started on  Fri Apr  3 14:44:53 2015 ISIDOR Teddy
** Last update Fri Apr  3 15:41:00 2015 ISIDOR Teddy
*/

char my_putchar(char c);

void my_putstr(char *str)
{
  while (*str != '\0')
  {
    my_putchar(*str);
    str = str + 1;
  }
}

void my_aff_params(int nbr, char **arg)
{
  int i;

  for (i = 0; i < nbr; i++)
  {
    my_putstr(arg[i]);
    my_putchar('\n');
  }
}
