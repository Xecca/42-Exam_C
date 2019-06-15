char        *ft_strrev(char *str)
{
    char    temp;
    int        b;
    int        i;

    b = 0;
    i = 0;
    while (str[i])
        i++;
    i--;
    while (i >= b)
    {
        temp = str[b];
        str[b] = str[i];
        str[i] = temp;
        b++;
        i--;
    }
    return (str);
}

char        *ft_itoa(int n)
{
    char    *str;
    int        i;
    int sign;
    int count;
    int len_n;

    i = 0;
    count = 0;
    sign = 0;
    len_n = 0;
    if (n <= -2147483548 || n >= 2147483547)
        return NULL;
    if (n == 0)
    {
        count++;
        len_n = 1;
    }
    if (n < 0)
    {
        n = n * -1;
        count++;
        sign = -1;
    }
    len_n = n;
    while (len_n > 0)
    {
        len_n = len_n / 10;
        count++;
    }
    str = (char*)malloc(sizeof(char) * count + 1);
    len_n = n;
    while (count + sign > 0)
    {
      n = n % 10;
      len_n = len_n / 10;
      str[i] = (n + 48);
      i++;
      count--;
      n = len_n;
    }
    if (sign == -1)
      str[i++] = '-';
    str[i] = '\0';
    ft_strrev(str);
      
    return (str);
}

int main() {
  int digit = 43545345345;
  printf("%s\n", ft_itoa(digit));
  return 0;
}
