/*
** my_list_size.c for  in /home/isidor_t/Jour09/isidor_t/my_list_size
** 
** Made by ISIDOR Teddy
** Login   <isidor_t@etna-alternance.net>
** 
** Started on  Thu Apr  9 17:37:11 2015 ISIDOR Teddy
** Last update Thu Apr  9 22:05:41 2015 ISIDOR Teddy
*/

#include <stdlib.h>
#include "my_list.h"

int my_list_size(t_list *begin)
{
  int i;
  t_list *tmp;

  i = 0;
  tmp = begin;
  while (tmp != NULL)
  {
    tmp = tmp->next;
    i++;
  }
  return (i);
}
