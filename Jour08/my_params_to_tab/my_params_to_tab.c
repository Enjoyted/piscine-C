/*
** my_params_to_tab.c for  in /home/isidor_t/Jour08/isidor_t/my_params_to_tab
** 
** Made by ISIDOR Teddy
** Login   <isidor_t@etna-alternance.net>
** 
** Started on  Wed Apr  8 17:28:59 2015 ISIDOR Teddy
** Last update Wed Apr  8 20:10:27 2015 ISIDOR Teddy
*/

#include <stdlib.h>

struct s_stock_par
{
  int  size_param;     /* longueur du paramètre */
  char *str;           /* adresse du paramètre  */
  char *copy;          /* copie du paramètre    */
  char **tab;          /* renvoyé par my_str_to_wordtab  */
};
char **my_str_to_wordtab(char *str);
char *my_strdup(char *str);
int my_strlen(char *str);

struct s_stock_par *my_params_to_tab(int ac, char **av)
{
  struct s_stock_par *stock;
  stock = malloc(sizeof(struct s_stock_par) * (ac + 1));
  int i;

  i = 0;
  while(i < ac)
  {
    stock[i].size_param = my_strlen(av[i]);
    stock[i].str = av[i];
    stock[i].copy = my_strdup(av[i]);
    stock[i].tab = my_str_to_wordtab(av[i]);
    i++;
  }
  stock[i].str = '\0';
  return (stock);
}
