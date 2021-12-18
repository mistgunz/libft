#include "libft.h"

void	*ft_memset(void *s, int c, size_t len)
{
	size_t			i;
	unsigned char	*ss;

	i = 0;
	ss = (unsigned char *)s;
	while (i < len)
	{
		ss[i] = c;
		i++;
	}
	return (s = ss);
}
