/*
** main_dicowesh.c for  in /home/isidor_t/DicoWESH/isidor_t
** 
** Made by ISIDOR Teddy
** Login   <isidor_t@etna-alternance.net>
** 
** Started on  Fri Apr 17 14:56:44 2015 ISIDOR Teddy
** Last update Sat Apr 18 12:31:12 2015 ISIDOR Teddy
*/

#include "dicowesh.h"
#include "libmy.h"

int user(t_list **dico)
{
  char entree[50];

  my_strcpy(entree, readLine());
  if(my_strcmp(entree, "quit") == 0)
  {
    my_putstr("'Zyvaaa tu vas où frere ?' \n");
    return (0);
  }
  else if (my_strcmp(entree, "a") == 0)
    aff_dico_wesh(dico);
  else if (my_strcmp(entree, "b") == 0)
    aff_dico_fr(dico);
  else if (my_strcmp(entree, "1") == 0)
    ajout_def(dico);
  else if (my_strcmp(entree, "2") == 0)
    wesh_to_fr(dico);
  else if (my_strcmp(entree, "3") == 0)
    fr_to_wesh(dico);
  else
    my_putstr("\x1b[34mChoisir une des options marquées ci-dessus (a,b,1,2,3)\x1b[0m\n");
  return (1);
}

void *fill_dico()
{
  t_list *first;
  t_list *second;

  first = malloc(sizeof(t_list));
  second = malloc(sizeof(t_list));
  if (first == NULL || second == NULL)
    return (0);
  first->wword = "Daron";
  first->fword = "Pere";
  first->next = NULL;
  second->wword = "Wesh";
  second->fword = "Bonjour";
  second->next = first;
  return (second);
}

int main()
{
  t_list *dico;
  
  my_putstr("Bienvenue sur le DicoWesh !\n");
  my_putstr("Veuillez choisir une des options présentes ci-dessous\n");
  my_putstr("a : afficher le dictionnaire sous la forme wesh : fr\n");
  my_putstr("b : afficher le dictionnaire sous la forme fr : wesh\n");
  my_putstr("1 : ajouter une définition\n");
  my_putstr("2 : traduire du wesh au francais\n");
  my_putstr("3 : traduire du francais au wesh\n");
  dico = fill_dico();
  while (user(&dico));
  return (0);
}
