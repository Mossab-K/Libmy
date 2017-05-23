/*
** my_getnbr.c for  in /home/kaimou_m/FDI-DEVC/librairie
** 
** Made by KAIMOUNI Mossab
** Login   <kaimou_m@etna-alternance.net>
** 
** Started on  Sat Oct  3 22:41:07 2015 KAIMOUNI Mossab
** Last update Tue Oct  6 17:50:21 2015 KAIMOUNI Mossab
*/

int	my_getnbr(char *str)
{
  int i;
  int j;
  int k;

  i = 0;
  j = 0;
  k = 0;
  while (str[i] == '-' || str[i] == '+')
    {
      if (str[i] == '-')
	++j;
      ++i;
    }
  while (str[i] >= '0' && str[i] <= '9')
    {
      k = k * 10;
      k = k + (str[i] - '0');
      ++i;
    }
  if (j % 2)
    k = k * -1;
  return (k);
}
