#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	l;
	size_t	i;

	i = 0;
	l = 0;
	while (src[l])
		l++;
	if (size > 0)
	{
		while (i < (size - 1) && size > 0 && *src)
		{
			*dst++ = *src++;
			i++;
		}
		*dst = '\0';
	}
	return (l);
}
