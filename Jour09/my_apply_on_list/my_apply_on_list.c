/*
** my_apply_on_list.c for  in /home/isidor_t/Jour09/isidor_t/my_apply_on_list
** 
** Made by ISIDOR Teddy
** Login   <isidor_t@etna-alternance.net>
** 
** Started on  Thu Apr  9 20:42:58 2015 ISIDOR Teddy
** Last update Thu Apr  9 21:10:18 2015 ISIDOR Teddy
*/

#include <stdlib.h>
#include "my_list.h"

void my_apply_on_list(t_list *begin,int (*f)())
{
  while (begin != NULL)
  {
    f(begin->data);
    begin = begin->next;
  }
}
