/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnait-el <rnait-el@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 23:25:39 by rnait-el          #+#    #+#             */
/*   Updated: 2021/12/24 00:07:32 by rnait-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
