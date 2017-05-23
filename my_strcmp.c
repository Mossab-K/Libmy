/*
** my_strcmp.c for  in /home/kaimou_m/FDI-DEVC/librairie
** 
** Made by KAIMOUNI Mossab
** Login   <kaimou_m@etna-alternance.net>
** 
** Started on  Sat Oct  3 22:07:08 2015 KAIMOUNI Mossab
** Last update Tue Oct  6 18:03:14 2015 KAIMOUNI Mossab
*/


int	my_strcmp(char *s1, char *s2)
{
  int i;

  i = 0;
  while (s1[i] != '\0' && s2[i] != '\0')
    {
      if (s1[i] < s2[i])
	return (-1);
      else if (s1[i] > s2[i])
	return (1);
      ++i;
    }
  if (s1[i] > s2[i])
    {
      return (1);
    }
  else if (s1[i] < s2[i])
    {
      return (-1);
    }
  return(0);
}
