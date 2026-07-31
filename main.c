#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>

size_t ft_strlen(const char *str);
char *ft_strcpy(char *dest, const char *src);
int ft_strcmp(const char *s1, const char *s2);
size_t ft_write(int fd, const void *buf, size_t count);
size_t ft_read(int fd, void *buf, size_t count);

/* int main(void)
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
    printf("ft_strcmp: %d\n\n", ft_strcmp(s5, s1));


    ft_write(1, "Hola desde ft_write\n", 20);


    size_t ret = ft_write(-1, "Hola\n", 5);
    printf("ret = %zd\n", ret);
    printf("errno = %d\n", errno);
    printf("%s\n", strerror(errno));


    printf("_______________________________________________________________\n");
    char buffer[100];
    size_t read_ret;

    printf("Escribe algo: ");
    fflush(stdout);

    ret = ft_read(0, buffer, sizeof(buffer) - 1);

    if (ret == -1)
    {
        perror("ft_read");
        return 1;
    }

    buffer[ret] = '\0';

    printf("Bytes leídos: %zd\n", ret);
    printf("Contenido: \"%s\"\n", buffer);
    return 0;
} */

int main(void)
{
    char buffer[100];
    ssize_t ret;

    printf("Escribe algo: ");
    fflush(stdout);

    ret = ft_read(-1, buffer, sizeof(buffer) - 1);

    if (ret == -1)
    {
        perror("ft_read");
        return 1;
    }

    buffer[ret] = '\0';

    printf("\nBytes leídos: %zd\n", ret);
    printf("Contenido: \"%s\"\n", buffer);

    return 0;
}