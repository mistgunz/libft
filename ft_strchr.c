/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnait-el <rnait-el@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 23:25:08 by rnait-el          #+#    #+#             */
/*   Updated: 2021/12/22 23:25:08 by rnait-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char	*ft_strchr(const char *s, int c)
{
	char	*b;
	int		i;

	i = 0;
	b = (char *)s;
	while (b[i])
	{
		if ((char)c == b[i])
			return (&b[i]);
		i++;
	}
	if (b[i] == (char )c)
		return (&b[i]);
	return (0);
}

