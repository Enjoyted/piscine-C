/*
** my_find_node_elm_eq_in_list.c for  in /home/isidor_t/Jour10/isidor_t/my_find_node_elm_eq_in_list
** 
** Made by ISIDOR Teddy
** Login   <isidor_t@etna-alternance.net>
** 
** Started on  Fri Apr 10 10:01:58 2015 ISIDOR Teddy
** Last update Fri Apr 10 16:33:10 2015 ISIDOR Teddy
*/

#include <stdlib.h>
#include "my_list.h"

t_list *my_find_node_elm_eq_in_list(t_list *begin, void *data_ref, int (*cmp)())
{
  while (begin != NULL)
    {
      if (cmp(begin->data, data_ref) == 0)
	{
	  return (begin);
	}
      begin = begin->next;
    }
  return (NULL);
}
