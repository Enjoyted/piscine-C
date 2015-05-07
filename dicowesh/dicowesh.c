/*
** dicowesh.c for  in /home/isidor_t/DicoWESH/isidor_t
** 
** Made by ISIDOR Teddy
** Login   <isidor_t@etna-alternance.net>
** 
** Started on  Fri Apr 17 14:57:21 2015 ISIDOR Teddy
** Last update Sat Apr 18 12:25:57 2015 ISIDOR Teddy
*/

#include <stdlib.h>
#include "dicowesh.h"
#include "libmy.h"

void ajout_def(t_list **dico)
{
  char entree[50];
  char **arr;
  t_list *node;
  t_list *eq;

  if ((node = malloc(sizeof(t_list))) == NULL || (eq = malloc(sizeof(t_list))) == NULL)
    return ;
  my_putstr("Mot en wesh puis mot en français. Ex : Daronne Mere\n");
  my_strcpy(entree, readLine());
  arr = my_str_to_wordtab(entree);
  if (arr[0] != NULL && arr[1] != NULL)
  {
    eq = my_find_node_elm_eq_in_list(*dico, arr[0], &my_strcmp, 1);
    if (eq != NULL)
      eq->fword = arr[1];
    else
    {
      node->next = NULL;
      node->wword = arr[0];
      node->fword = arr[1];
      my_add_list_to_list(dico, node);
      my_putstr("\x1b[32mMot correctement ajouté au dictionnaire.\x1b[0m");
    }
  }
  my_putstr("\n \x1b[34mChoissisez de nouveau une option (a,b,1,2,3)\x1b[0m\n");
}

void wesh_to_fr(t_list **dico)
{
  char entree[50];
  char **arr;
  t_list *eq;
  
  if ((eq = malloc(sizeof(t_list))) == NULL)
    return ;
  my_putstr("Veuillez rentrer un mot en wesh pour sa trad en français.\n");
  my_strcpy(entree, readLine());
  arr = my_str_to_wordtab(entree);
  if (arr[0] != NULL)
  {
    eq = my_find_node_elm_eq_in_list(*dico, arr[0], &my_strcmp, 1);
    if (eq != NULL)
    {
      my_putstr("\x1b[32mLa traduction est : ");
      my_putstr(eq->fword);
      my_putstr("\x1b[0m");
    }
    else
      my_putstr("\x1b[33mAucun mot wesh de la sorte dans le dictionnaire.\x1b[0m");
  }
  else
    my_putstr("\x1b[31mIl fallait entrer un mot...\x1b[0m");
  my_putstr("\n \x1b[34mChoissisez de nouveau une option (a,b,1,2,3)\x1b[0m\n");
}

void fr_to_wesh(t_list **dico)
{
  char entree[50];
  char **arr;
  t_list *eq;
  
  if ((eq = malloc(sizeof(t_list))) == NULL)
    return ;
  my_putstr("Veuillez rentrer un mot en français pour sa trad en wesh.\n");
  my_strcpy(entree, readLine());
  
  arr = my_str_to_wordtab(entree);
  if (arr[0] != NULL)
  {
    eq = my_find_node_elm_eq_in_list(*dico, arr[0], &my_strcmp, 0);
    if (eq != NULL)
    {
      my_putstr("\x1b[32mLa traduction est : ");
      my_putstr(eq->wword);
      my_putstr("\x1b[0m");
    }
    else
      my_putstr("\x1b[33mAucun mot français de la sorte dans le dictionnaire.\x1b[0m");
  }
  else
    my_putstr("\x1b[31mIl fallait entrer un mot...\x1b[0m");
  my_putstr("\n \x1b[34mChoissisez de nouveau une option (a,b,1,2,3)\x1b[0m\n");
}

void aff_dico_wesh(t_list **dico)
{
  int i;
  t_list *beginning;
  
  my_sort_list(dico, &my_strcmp, 1);
  beginning = *dico;
  i = 0;
  while (beginning != NULL)
  {
    my_put_nbr(i);
    my_putstr(". ");
    my_putstr(beginning->wword);
    my_putstr(" : ");
    my_putstr(beginning->fword);
    my_putchar('\n');
    beginning = beginning->next;
    i++;
  }
  my_putstr(" \x1b[32mNombres de mots : ");
  my_put_nbr(i);
  my_putstr("\x1b[0m");
  my_putchar('\n');
  my_putstr("\n \x1b[34mChoissisez de nouveau une option (a,b,1,2,3)\x1b[0m\n");
}

void aff_dico_fr(t_list **dico)
{
  int i;
  t_list *beginning;

  my_sort_list(dico, &my_strcmp, 0);
  beginning = *dico;
  i = 0;
  while (beginning != NULL)
  {
    my_put_nbr(i);
    my_putstr(". ");
    my_putstr(beginning->fword);
    my_putstr(" : ");
    my_putstr(beginning->wword);
    my_putchar('\n');
    beginning = beginning->next;
    i++;
  }
  my_putstr(" \x1b[32mNombres de mots : ");
  my_put_nbr(i);
  my_putstr("\x1b[0m");
  my_putchar('\n');
  my_putstr("\n \x1b[34mChoissisez de nouveau une option (a,b,1,2,3)\x1b[0m\n");
}
