/*
** my_swap.c for  in /home/kaimou_m/FDI-DEVC/jour03/my_swap
** 
** Made by KAIMOUNI Mossab
** Login   <kaimou_m@etna-alternance.net>
** 
** Started on  Wed Sep 30 11:36:26 2015 KAIMOUNI Mossab
** Last update Wed Sep 30 11:40:54 2015 KAIMOUNI Mossab
*/

void	my_swap(int *a, int *b)
{
  int c;

  c = *b;
  *b = *a;
  *a = c;
}

