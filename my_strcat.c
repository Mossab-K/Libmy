/*
** my_strcat.c for  in /home/kaimou_m/FDI-DEVC/jour04/my_strcat
** 
** Made by KAIMOUNI Mossab
** Login   <kaimou_m@etna-alternance.net>
** 
** Started on  Thu Oct  1 18:52:15 2015 KAIMOUNI Mossab
** Last update Tue Oct  6 15:08:04 2015 KAIMOUNI Mossab
*/

int	my_strlen(char *str);

char	*my_strcat(char *str1, char *str2)
{
  int i;
  int a;
  int c;

  i = my_strlen(str1);
  a = my_strlen(str2);
  c = a;
  a = 0;
  while (c != 0)
    {
      str1[i] = str2[a];
      --c;
      i++;
      ++a;
    }
  return (str1);
}
