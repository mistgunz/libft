/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnait-el <rnait-el@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 23:25:08 by rnait-el          #+#    #+#             */
/*   Updated: 2022/01/23 05:47:35 by rnait-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*ss;
	int		i;

	i = 0;
	ss = (char *)s;
	while (ss[i])
	{
		if ((char)c == ss[i])
			return (&ss[i]);
		i++;
	}
	if (ss[i] == (char )c)
		return (&ss[i]);
	return (NULL);
}
