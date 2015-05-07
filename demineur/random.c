/*
** random.c for  in /home/isidor_t/demineur
** 
** Made by ISIDOR Teddy
** Login   <isidor_t@etna-alternance.net>
** 
** Started on  Mon Apr 13 10:50:49 2015 ISIDOR Teddy
** Last update Mon Apr 13 17:31:19 2015 ISIDOR Teddy
*/

#include <stdlib.h>
#include <time.h>

int randomnumber(int max)
{
  int random;

  random = (rand()% max);

  return (random);
}
