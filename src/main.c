#include <stdio.h>
#include <string.h>

size_t ft_strlen(const char *str);

int main(void)
{
    char *str = "Hola mundo";

    printf("ft_strlen: %zu\n", ft_strlen(str));
    printf("strlen:    %zu\n", strlen(str));

    return 0;
}