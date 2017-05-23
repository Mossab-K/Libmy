/*
** my_strncpy.c for  in /home/kaimou_m/FDI-DEVC/jour04/my_strncpy
** 
** Made by KAIMOUNI Mossab
** Login   <kaimou_m@etna-alternance.net>
** 
** Started on  Thu Oct  1 13:29:23 2015 KAIMOUNI Mossab
** Last update Tue Oct  6 15:06:23 2015 KAIMOUNI Mossab
*/

int	my_strlen(char *str);

char    *my_strncpy(char *dest, char *src, int n)
{
  int i;
  int o;
  
  o = 0;
  i = my_strlen(src);
  while (o != n)
    {
      dest[o] = src[o];
      o++;
    }
  if (i < n)
    {
      while (i != n)
        {
          dest[i] = '\0';
          i++;
        }
    }
  return (dest);
}
