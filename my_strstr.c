/*
** my_strstr.c for  in /home/kaimou_m/FDI-DEVC/librairie/my_strstr
** 
** Made by KAIMOUNI Mossab
** Login   <kaimou_m@etna-alternance.net>
** 
** Started on  Sat Oct  3 15:09:16 2015 KAIMOUNI Mossab
** Last update Tue Oct  6 16:14:47 2015 KAIMOUNI Mossab
*/

void	my_putchar(char c);

char	*my_strstr(char *str, char *to_find)
{
  int i;
  
  i = 0;
  while (str[i] != '\0')
    {
      while (to_find[i] != '\0')
	{
	  if (str[i] != to_find[i])
	    {
	      return (my_strstr(str + 1, to_find));
	    }
	  ++i;
	}
      return (str);
    }
  return ("null");
}
