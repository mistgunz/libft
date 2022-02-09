/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnait-el <rnait-el@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 23:25:57 by rnait-el          #+#    #+#             */
/*   Updated: 2022/01/24 10:52:47 by rnait-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *substr, size_t len)
{
	size_t	i;
	size_t	c;
	size_t	sub_len;
	char	*s;

	i = 0;
	s = (char *)str;
	sub_len = ft_strlen(substr);
	if (sub_len == 0 || str == substr)
		return (s);
	while (i < len && s[i])
	{
		c = 0;
		while (i + c < len && substr[c] != '\0'
			&& s[i + c] == substr[c] && s[i + c] != '\0')
			c++;
		if (c == sub_len)
			return (s + i);
		i++;
	}
	return (NULL);
}
