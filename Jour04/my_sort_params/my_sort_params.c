/*
** my_sort_params.c for  in /home/isidor_t/Jour04/isidor_t/my_sort_params
** 
** Made by ISIDOR Teddy
** Login   <isidor_t@etna-alternance.net>
** 
** Started on  Mon Apr  6 13:37:53 2015 ISIDOR Teddy
** Last update Mon Apr  6 19:32:34 2015 ISIDOR Teddy
*/

char my_putchar(char c);

void my_aff_sorted_params(char **arg, int length)
{
  int i;
  int c;

  i = 0;
  while (i < length)
  {
    c = 0;
    while (arg[i][c] != '\0')
    {
      my_putchar(arg[i][c]);
      c++;
    }
    my_putchar('\n');
    i++;
  }
}

void my_swap_arrays(char **arr1, char **arr2)
{
  char *tmp;

  tmp = *arr1;
  *arr1 = *arr2;
  *arr2 = tmp;
}

int my_strcmp(char *s1, char *s2)
{
  int i;
  int diff;

  diff = 0;
  i = 0;
  while (s1[i] != '\0' && s2[i] != '\0')
  {
    if (diff == 0)
      diff = (s1[i] == s2[i]) ? 0 : ((s1[i] < s2[i]) ? -1 : 1);
    i++;
  }
  return (diff);
}

void my_sort_params(int nb, char **arg)
{
  int i;
  int c;

  c = 0;
  while (c < nb)
  {
    i = 0;
    while (i < nb)
    {
      if (my_strcmp(arg[i], arg[c]) == 1)
	my_swap_arrays(&arg[i], &arg[c]);
      i++;
    }
    c++;
  }
  my_aff_sorted_params(arg, nb);
}
