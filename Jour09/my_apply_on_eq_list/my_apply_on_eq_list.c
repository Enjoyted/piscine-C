/*
** my_apply_on_eq_list.c for  in /home/isidor_t/Jour09/isidor_t/my_apply_on_eq_list
** 
** Made by ISIDOR Teddy
** Login   <isidor_t@etna-alternance.net>
** 
** Started on  Thu Apr  9 21:15:38 2015 ISIDOR Teddy
** Last update Thu Apr  9 22:14:52 2015 ISIDOR Teddy
*/

#include <stdlib.h>
#include "my_list.h"

void my_apply_on_eq_list(t_list *begin, int (*f)(),
			 void *data_ref, int (*cmp)())
{
  while (begin != NULL)
  {
    if (cmp(begin->data, data_ref) == 0)
    {
      f(begin->data);
    }
    begin = begin->next;
  }
}
