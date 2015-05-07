/*
** my_sum_params.c for  in /home/isidor_t/Jour07/isidor_t/my_sum_params
** 
** Made by ISIDOR Teddy
** Login   <isidor_t@etna-alternance.net>
** 
** Started on  Tue Apr  7 19:37:48 2015 ISIDOR Teddy
** Last update Tue Apr  7 21:58:27 2015 ISIDOR Teddy
*/

#include <stdlib.h>

int my_strlen(char *str)
{
  int i;

  i = 0;
  while (*str != '\0')
    {
      str = str + 1;
      i++;
    }
  return (i);
}

int my_count_chars_params(int argc, char **argv)
{
  int i;
  int s;

  i = 0;
  s = 0;
  while (i < argc)
  {
    s+= my_strlen(argv[i]);
    i++;
  }
  return (s);
}

char *my_sum_params(int argc, char **argv)
{
  int i;
  int n;
  int s;
  int x;
  char *dest;
  s = 0;
  s = my_count_chars_params(argc, argv);
  dest = (char *)malloc(sizeof(char) * (s + argc) + 1);
  i = 0;
  x = 0;
  while (argv[i] != '\0')
  {
    x = (i > 0) ? x + 1: 0;
    n = 0;
    while (argv[i][n] != '\0')
    {
      dest[x] = argv[i][n];
      x++;
      n++;
    }
    dest[x] = '\n';
    i++;
  }
  return (dest);
}
