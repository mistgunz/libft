#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	ld;
	size_t	ls;
	size_t	i;

	ld = ft_strlen(dst);
	ls = ft_strlen((char *)src);
	i = 0;
	if (size && ld < size - 1)
	{	
		dst += ld;
		while (*src && ld + i < size - 1)
		{
			*dst++ = *src++;
			i++;
		}
		*dst = '\0';
	}	
	if (ld >= size)
		ld = size;
	return (ls + ld);
}
