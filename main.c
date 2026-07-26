#include <stdio.h>
#include <string.h>
#include <stdlib.h>

size_t ft_strlen(const char *str);
char *ft_strcpy(char *dest, const char *src);

int main(void)
{
    char *str = "Hola mundo";
    char *result= malloc(sizeof(str));
    printf("ft_strlen: %zu\n", ft_strlen(str));
    printf("strlen:    %zu\n", strlen(str));

    printf("ft_strcpy; %s", ft_strcpy(result,str));

    return 0;
}