/*
** my_strcpy.c for  in /home/kaimou_m/FDI-DEVC/librairie
** 
** Made by KAIMOUNI Mossab
** Login   <kaimou_m@etna-alternance.net>
** 
** Started on  Sat Oct  3 22:11:24 2015 KAIMOUNI Mossab
** Last update Tue Oct  6 12:11:33 2015 KAIMOUNI Mossab
*/

char	*my_strcpy(char *dest, char *src)
{
  int i;

  i = 0;
  while (src[i] != '\0')
    {
      dest[i] = src[i];
      i++;
    }
  dest[i] = '\0';
  return (dest);
}
