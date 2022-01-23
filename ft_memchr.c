/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnait-el <rnait-el@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 23:24:22 by rnait-el          #+#    #+#             */
/*   Updated: 2022/01/23 03:15:12 by rnait-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	character;
	unsigned char	*str;
	unsigned int	i;

	str = (unsigned char *)s;
	character = (unsigned char)c;
	i = 0;
	while (n > 0)
	{
		if (str[i] == character)
			return ((unsigned char *)(&str[i]));
		i++;
		n--;
	}
	return (NULL);
}
