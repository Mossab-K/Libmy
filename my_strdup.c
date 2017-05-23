/*
** my_strdup.c for  in /home/kaimou_m/FDI-DEVC/jour07/my_strdup
** 
** Made by KAIMOUNI Mossab
** Login   <kaimou_m@etna-alternance.net>
** 
** Started on  Mon Oct  5 13:21:34 2015 KAIMOUNI Mossab
** Last update Mon Oct  5 13:58:37 2015 KAIMOUNI Mossab
*/

#include <stdlib.h>

char	*my_strcpy(char *dest, char *src);

int	my_strlen(char *str);

char	*my_strdup(char *str)
{
  int i;
  char *copy;

  i = my_strlen(str);
  copy = malloc(i * sizeof(*copy));
  my_strcpy(copy, str);
  return (copy);
}
