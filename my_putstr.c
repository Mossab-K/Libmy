/*
** my_putstr.c for  in /home/kaimou_m/FDI-DEVC/jour03/my_putstr
** 
** Made by KAIMOUNI Mossab
** Login   <kaimou_m@etna-alternance.net>
** 
** Started on  Wed Sep 30 09:35:51 2015 KAIMOUNI Mossab
** Last update Tue Oct  6 15:04:34 2015 KAIMOUNI Mossab
*/

#include <unistd.h>

void	my_putchar(char c);

void	my_putstr(char *str)
{
  while (*str != '\0')
    {
      my_putchar(*str);
      str = str + 1;
    }
}
