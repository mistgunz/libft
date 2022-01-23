/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnait-el <rnait-el@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 23:25:20 by rnait-el          #+#    #+#             */
/*   Updated: 2022/01/23 05:57:19 by rnait-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*rtn;
	size_t	size;

	size = ft_strlen(s1) + 1;
	rtn = malloc(sizeof(char) * size);
	if (!rtn)
		return (0);
	rtn = ft_memcpy(rtn, s1, size);
	return (rtn);
}
