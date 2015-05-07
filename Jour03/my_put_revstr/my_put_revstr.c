/*
** my_put_revstr.c for  in /home/isidor_t/Jour03/isidor_t/my_put_revstr
** 
** Made by ISIDOR Teddy
** Login   <isidor_t@etna-alternance.net>
** 
** Started on  Fri Apr  3 11:44:44 2015 ISIDOR Teddy
** Last update Fri Apr  3 14:41:29 2015 ISIDOR Teddy
*/

char my_putchar(char c);

void my_put_revstr(char *str)
{
  int i;
  int f;

  f = 0;
  i = 0;
  while (f == 0)
  {
    if (*str == '\0')
    {
      while (i > 0)
      {
	str = str - 1;	
	my_putchar(*str);
	i--;
      }
      f = 1;
    }
    i++;
    str = str + 1;
  }
}
