/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnait-el <rnait-el@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 23:26:09 by rnait-el          #+#    #+#             */
/*   Updated: 2022/01/21 23:24:50 by rnait-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{	
	char	*c;
	size_t	i;

	if (!s)
		return (0);
	if (start >= ft_strlen(s) || !*s || !len)
	{
		c = ft_strdup("\0");
		return (c);
	}
	if (len >= ft_strlen(s))
		len = ft_strlen(s);
	i = 0;
	c = malloc(sizeof(char) * len + 1);
	if (!c)
		return (0);
	while (i < len)
	{
		c[i] = s[start + i];
		i++;
	}
	c[i] = '\0';
	return (c);
}
