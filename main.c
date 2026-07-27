#include <stdio.h>
#include <string.h>
#include <stdlib.h>

size_t ft_strlen(const char *str);
char *ft_strcpy(char *dest, const char *src);
int ft_strcmp(const char *s1, const char *s2);

int main(void)
{
    char *str = "Hola mundo";
    char *result= malloc(sizeof(str));
    printf("ft_strlen: %zu\n", ft_strlen(str));
    printf("strlen:    %zu\n", strlen(str));

    printf("ft_strcpy; %s", ft_strcpy(result,str));

    char *s1 = "hola";
    char *s2 = "hola";
    char *s3 = "hola";
    char *s4 = "holb";
    char *s5 = "";

    printf("strcmp : %d\n", strcmp(s1, s2));
    printf("ft_strcmp: %d\n\n", ft_strcmp(s1, s2));

    printf("strcmp : %d\n", strcmp(s1, s4));
    printf("ft_strcmp: %d\n\n", ft_strcmp(s1, s4));

    printf("strcmp : %d\n", strcmp(s4, s1));
    printf("ft_strcmp: %d\n\n", ft_strcmp(s4, s1));

    printf("strcmp : %d\n", strcmp(s5, s5));
    printf("ft_strcmp: %d\n\n", ft_strcmp(s5, s5));

    printf("strcmp : %d\n", strcmp(s5, s1));
    printf("ft_strcmp: %d\n", ft_strcmp(s5, s1));

    return 0;
}