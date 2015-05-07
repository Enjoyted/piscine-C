/*
** my_rev_list.c for  in /home/isidor_t/Jour09/isidor_t/my_rev_list
** 
** Made by ISIDOR Teddy
** Login   <isidor_t@etna-alternance.net>
** 
** Started on  Thu Apr  9 18:21:50 2015 ISIDOR Teddy
** Last update Thu Apr  9 20:37:14 2015 ISIDOR Teddy
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

void my_rev_list(t_list **begin)
{
  t_list *nextNode;
  t_list *prevNode;
  int c;

  c = my_list_size(*begin);
  if (c > 0)
  {
    nextNode = (*begin)->next;
    prevNode = *begin;
    (*begin)->next = NULL;
    while (c > 1)
    {
      *begin = nextNode;
      nextNode = (*begin)->next;
      (*begin)->next = prevNode;
      prevNode = *begin;
      c--;
    }
  }
}
