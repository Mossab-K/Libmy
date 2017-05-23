/*
** my_str_to_wordtab.c for  in /home/kaimou_m/FDI-DEVC/jour07/my_str_to_wordtab
** 
** Made by KAIMOUNI Mossab
** Login   <kaimou_m@etna-alternance.net>
** 
** Started on  Mon Oct  5 14:23:08 2015 KAIMOUNI Mossab
** Last update Wed Oct  7 09:26:23 2015 KAIMOUNI Mossab
*/

#include <stdlib.h>
#include <unistd.h>

int	count_words(char *str)
{
  int i;
  int c;

  i = 0;
  c = 0;
  while (str[i] != '\0')
    {
      if ((str[i] >= 48 && str[i] <= 57) ||
          (str[i] >= 65 && str[i] <= 90) ||
          (str[i] >= 97 && str[i] <= 122))
        {
          while ((str[i] >= 48 && str[i] <= 57) ||
                 (str[i] >= 65 && str[i] <= 90) ||
                 (str[i] >= 97 && str[i] <= 122))
            ++i;
          ++c;
        }
      ++i;
    }
  return (c);
}

int	good_carac(char c)
{
  if ((c >= 48 && c <= 57) ||
      (c >= 65 && c <= 90) ||
      (c >= 97 && c <= 122))
    return (1);
  else
    return (0);
}

void	condition(int *l, int *i, char *str, char **tab)
{
  int j;
  int k;

  j = 0;
  k = 0;
  while (good_carac(str[*i]) == 1 && str[*i] != '\0')
    {
      ++j;
      *i = *i + 1;
    }
  *i = *i - j;
  tab[*l] = malloc((j + 1) * sizeof(**tab));
  while (j != 0)
    {
      tab[*l][k] = str[*i];
      *i = *i + 1;
      ++k;
      --j;
    }
  *l = *l + 1;
}

char	**my_str_to_wordtab(char *str)
{
  int	i;
  int	l;
  int count;
  char	**tab;

  l = 0;
  count = count_words(str);
  tab = malloc((count + 1) * sizeof(*tab));
  i = 0;
  while (str[i] != '\0')
    {
      if (good_carac(str[i]) == 1)
	{
	  condition(&l, &i, str, tab);
	}
      i++;
    }
  tab[l] = 0;
  return (tab);
}
