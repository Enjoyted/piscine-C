/*
** my_rev_params.c for  in /home/isidor_t/Jour03/isidor_t/my_rev_params
** 
** Made by ISIDOR Teddy
** Login   <isidor_t@etna-alternance.net>
** 
** Started on  Fri Apr  3 15:47:12 2015 ISIDOR Teddy
** Last update Fri Apr  3 16:25:03 2015 ISIDOR Teddy
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

void my_rev_params(int nbr, char **arg)
{
  int i;

  nbr = nbr - 1;
  i = nbr;
  while (i >= 0)
  {
    my_putstr(arg[i]);
    my_putchar('\n');
    i--;
  }
}
