/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnait-el <rnait-el@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 23:26:09 by rnait-el          #+#    #+#             */
/*   Updated: 2022/02/20 02:17:39 by rnait-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{	
	char	*c;
	size_t	i;

	if (!s)
		return (NULL);
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
		return (NULL);
	while (i < len)
	{
		c[i] = s[start + i];
		i++;
	}
	c[i] = '\0';
	return (c);
}
