#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
    char *ptr;

    ptr = b;
    while (len--)
        *ptr++ = c;
    return (b);
}
