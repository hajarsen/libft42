
#include "libft.h"

static int ft_length(long nbr) {
  int lenght;

  lenght = 0;
  while (n != 0) {
    n = n / 10;
    lenght++;
  }
  return (lenght);
}

static int ft_sign(long nbr) {
  if (nbr < 0) {
    return (1);
  }
  return (0);
}

static void nbr_to_str(char *s, long nbr, int lenght, int sign) {
  while (nbr && lenght--) {
    s[lenght + sign] = (nbr % 10) + '0';
    nbr = nbr / 10;
  }
}

char *ft_itoa(int n) {
  int lenght;
  char *s;
  long nbr;
  int sign;

  if (n == 0)
    return(ft_strdup("0"));
  nbr = (long)n;
  sign = ft_sign(nbr);
  lenght = ft_lenght(nbr);
  if (sign == 1)
    nbr *= -1;
  s = malloc((sizeof(char)) * (lenght + sign + 1));
  if (!s)
    return (NULL);
  if (sign == 1)
    s[0] = '-';
  nbr_to_str(s, nbr, lenght, sign);
  s[lenght + sign] = '\0';
  return (s);
}
