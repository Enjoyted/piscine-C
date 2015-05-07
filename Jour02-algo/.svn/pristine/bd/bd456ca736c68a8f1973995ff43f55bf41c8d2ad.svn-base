/*
** enc_cesar.c for Ì in /home/isidor_t/Piscine02/Jour2/isidor_t/enc_cesar
** 
** Made by ISIDOR Teddy
** Login   <isidor_t@etna-alternance.net>
** 
** Started on  Thu Apr 16 09:39:09 2015 ISIDOR Teddy
** Last update Thu Apr 16 11:05:43 2015 ISIDOR Teddy
*/

#include <unistd.h>

void my_putchar(char c)
{
  write(1, &c, 1);
}

void enc_cesar(char *str, int n)
{
  int i;
  int diff;
  int print;
  i = 0;
  while (str[i] != '\0')
  {
    diff = 0;
    print = 0;
    if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
    {
      if (str[i] >= 65 && str[i] <= 90)
      {
	diff = (str[i] + n > 90) ? (str[i] + n) - 91 : 0;
	print = (diff > 0) ? 65 + diff : str[i] + n;
      }
      else if (str[i] >= 97 && str[i] <= 122)
      {
	diff = (str[i] + n > 122) ? (str[i] + n) - 123 : 0;
        print = (diff > 0) ? 97 + diff : str[i] + n;
      }
    }
    (print != 0) ? my_putchar(print) : my_putchar(str[i]);
    i++;
  }
}
