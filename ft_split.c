#include <stdlib.h>

static char **alloc_arr(const char *str, char c, int *len)
{
    char **arr;

    while (*str == c)
        str++;
    if (*str)
        (*len)++;
    while (*str && *str != c)
        str++;
    if (!*str && *len)
        arr = (char **)malloc(sizeof(char *) * (*len + 1));
    if (*str)
        arr = alloc_arr(str, c, len);
    return (arr);
}

char **ft_split(const char *str, char c)
{
    char    **arr;
    int     len;

    if (!str)
        return (NULL);
    len = 0;
    arr = alloc_arr(str, c, &len);
    if (!arr || !len)
        return (NULL);

    return (arr);
}
