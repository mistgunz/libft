/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnait-el <rnait-el@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 23:25:34 by rnait-el          #+#    #+#             */
/*   Updated: 2021/12/22 23:25:34 by rnait-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


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
