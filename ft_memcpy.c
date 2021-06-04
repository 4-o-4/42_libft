#include "libft.h"

void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
   char *ptr_d;
   char *ptr_s;

   ptr_d = (char *)dst;
   ptr_s = (char *)src;
   while (n--)
         *ptr_d++ = *ptr_s++;
   return (dst);
}
