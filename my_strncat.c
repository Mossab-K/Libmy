/*
** my_strncat.c for  in /home/kaimou_m/FDI-DEVC/jour04/my_strncat
** 
** Made by KAIMOUNI Mossab
** Login   <kaimou_m@etna-alternance.net>
** 
** Started on  Thu Oct  1 19:42:33 2015 KAIMOUNI Mossab
** Last update Tue Oct  6 15:08:54 2015 KAIMOUNI Mossab
*/

int	my_strlen(char *str);

char	*my_strncat(char *str1, char *str2, int n)
{
  int	i;
  int	c;

  i = my_strlen(str1);
  c = 0;
  while (c != n)
    {
      str1[i] = str2[c];
      ++c;
      i++;
    }
  return (str1);
}
