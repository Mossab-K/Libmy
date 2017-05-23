/*
** my_strlen.c for  in /home/kaimou_m/FDI-DEVC/jour03/my_strlen
** 
** Made by KAIMOUNI Mossab
** Login   <kaimou_m@etna-alternance.net>
** 
** Started on  Wed Sep 30 09:55:50 2015 KAIMOUNI Mossab
** Last update Wed Sep 30 17:47:26 2015 KAIMOUNI Mossab
*/

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (*str != '\0')
    {
      str = str + 1;
      i++;
    }
  return (i);
}
