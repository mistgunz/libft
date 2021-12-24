/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnait-el <rnait-el@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 23:23:05 by rnait-el          #+#    #+#             */
/*   Updated: 2021/12/24 00:56:10 by rnait-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(int n)
{
	unsigned int	i;
	int				j;

	i = n;
	if (n < 0)
		i = -n;
	j = 0;
	while (i != 0)
	{
		i /= 10;
		j++;
	}
	return (j);
}

static void	put_digit(char *c, unsigned int i, int j)
{
	while (i != 0)
	{
		j--;
		c[j] = (i % 10 + 48);
		i = i / 10;
	}
}

char	*ft_itoa(int n)
{
	unsigned int	i;
	int				j;
	char			*c;

	j = ft_count(n);
	i = n;
	if (n <= 0)
	{
		i = -n;
		j += 1;
	}	
	c = malloc(sizeof(char) * j + 1);
	if (c == NULL)
		return (0);
	if (n < 0)
		*c = '-';
	if (!n)
		*c = '0';
	c[j] = '\0';
	put_digit(c, i, j);
	return (c);
}
