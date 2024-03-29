#include <stdio.h>
int        ft_atoi(char *str)
{
    int        i;
    int        sign;
    int        result;
    i = 0;
    sign = 1;
    result = 0;
    while (str[i] <= 32)
    {
        i++;
    }
    if (str[i] == '-')
    {
        sign = -1;
    }
    while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
    {
        result = result*10 + str[i] - '0';
        i++;
    }
    return (result * sign);    
}
int     main(void)
{
    printf("result: %d\n", ft_atoi("---10") );
}
