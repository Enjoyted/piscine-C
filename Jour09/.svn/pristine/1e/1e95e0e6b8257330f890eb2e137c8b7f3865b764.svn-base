/*
** my_params_in_list.c for  in /home/isidor_t/Jour09/my_params_in_list
** 
** Made by ISIDOR Teddy
** Login   <isidor_t@etna-alternance.net>
** 
** Started on  Thu Apr  9 14:56:14 2015 ISIDOR Teddy
** Last update Thu Apr  9 22:17:30 2015 ISIDOR Teddy
*/
#include <stdlib.h>
#include "my_list.h"

t_list *my_params_in_list(int ac,char **av)
{
  t_list *node;
  t_list *last;
  int i;

  i = 0;
  last = NULL;
  while (i < ac)
  {
    node = malloc(sizeof(t_list));
    if (node == 0)
      return (0);
    node->next = last;
    node->data = av[i];
    last = node;
    i++;
  }
  return (node);
}
