/*
** my_strupcase.c for  in /home/isidor_t/Jour02/isidor_t/my_strupcase
** 
** Made by ISIDOR Teddy
** Login   <isidor_t@etna-alternance.net>
** 
** Started on  Thu Apr  2 11:58:34 2015 ISIDOR Teddy
** Last update Thu Apr  2 12:35:52 2015 ISIDOR Teddy
*/

char *my_strupcase(char str[])
{
  int i;

  i = 0;
  while (str[i] != '\0')
  {
    if (str[i] >= 97 && str[i] <= 122)
    {
      str[i] = str[i] - 32;
    }
    i++;
  }
  return (str);
}
