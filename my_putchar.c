/*
** my-putchar.c for  in /home/kaimou_m/FDI-DEVC/jour01/my_putchar
** 
** Made by KAIMOUNI Mossab
** Login   <kaimou_m@etna-alternance.net>
** 
** Started on  Mon Sep 28 10:49:53 2015 KAIMOUNI Mossab
** Last update Mon Sep 28 18:56:21 2015 KAIMOUNI Mossab
*/

#include <unistd.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}
