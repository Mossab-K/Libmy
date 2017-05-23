/*
** my_put_nbr.c for  in /home/kaimou_m/FDI-DEVC/librairie
** 
** Made by KAIMOUNI Mossab
** Login   <kaimou_m@etna-alternance.net>
** 
** Started on  Sat Oct  3 22:13:31 2015 KAIMOUNI Mossab
** Last update Tue Oct  6 18:51:46 2015 KAIMOUNI Mossab
*/

void	my_putchar(char c);

void	my_putstr(char *str);

void	my_put_nbr(int nb)
{
  int i;
  int res;

  i = 1;
  res = 0;
  if (nb == -2147483648)
    my_putstr("-2147483648");
  else
    {
      if (nb < 0)
	{
	  my_putchar('-');
	  nb = nb * -1;
	}
      while ((nb / i) >= 10)
	i = i * 10;
      while (i > 0)
	{
	  res = (nb / i) % 10;
	  my_putchar(res + '0');
	  i = i / 10;
	}
    }
}
