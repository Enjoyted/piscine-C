/*
** my_rm_all_eq_from_list.c for  in /home/isidor_t/Jour10/isidor_t/my_rm_all_eq_from_list
** 
** Made by ISIDOR Teddy
** Login   <isidor_t@etna-alternance.net>
** 
** Started on  Fri Apr 10 10:13:06 2015 ISIDOR Teddy
** Last update Fri Apr 10 15:02:30 2015 ISIDOR Teddy
*/

#include <stdlib.h>
#include "my_list.h"

void my_rm_all_eq_from_list(t_list **begin, void *data_ref, int (*cmp)())
{
  t_list *nextNode;
  t_list *prevNode;
  t_list *currNode;
  t_list *toFree;

  currNode = *begin;
  prevNode = NULL;
  while (currNode != NULL)
  {
    if (cmp(currNode->data, data_ref) == 0)
    {
      nextNode = (currNode->next != NULL) ? currNode->next : NULL;
      if (prevNode != NULL)
	prevNode->next = nextNode;
      else
	*begin = currNode->next;
      toFree = currNode;
      currNode = currNode->next;
      free(toFree);
      continue;
    }
    prevNode = currNode;
    currNode = currNode->next;
  }
}
