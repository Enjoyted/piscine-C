/*
** my_detect_format.c for  in /home/isidor_t/Jour03/isidor_t/my_detect_format
** 
** Made by ISIDOR Teddy
** Login   <isidor_t@etna-alternance.net>
** 
** Started on  Fri Apr  3 17:08:12 2015 ISIDOR Teddy
** Last update Fri Apr  3 18:24:12 2015 ISIDOR Teddy
*/

char my_putchar(char c);

void my_putstr(char *str)
{
  while (*str != '\0')
    {
      my_putchar(*str);
      str = str + 1;
    }
}

void my_format(int state)
{
  if (state == 1)
  {
    my_putstr(" => Chiffre");
  }
  else if (state == 2)
  {
    my_putstr(" => Mot");
  }
  else
  {
    my_putstr(" => Inconnu");
  }
  my_putchar('\n');
}

void my_analize(int start, int finish, char *str)
{
  int i;
  int state;

  state = 0;
  i = start;
  while (str[i] != '\0' && i <= finish)
  {
    if (str[i] >= 48 && str[i] <= 57)
      state = (state == 3 || state == 2) ? 3 : 1;
    else if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
      state = (state == 3 || state == 1) ? 3 : 2;
    if (str[i] != 32)
      my_putchar(str[i]);
    i++;
  }
  my_format(state);
}

void my_detect_format(char *str)
{
  int i;
  int k;

  k = 0;
  i = 0;
  while (str[i] != '\0')
  {
    if (str[i] == ' ' || str[i + 1] == '\0')
    {
      my_analize(k, i, str);
      k = i + 1;
    }
    i++;
  }
}
