/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnait-el <rnait-el@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 23:25:03 by rnait-el          #+#    #+#             */
/*   Updated: 2022/02/24 03:15:20 by rnait-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	wcount(const char *s, char c)
{
	int	i;

	i = 0;
	while (*s == c && *s)
		s++;
	while (*s)
	{
		if (*s != c && *s)
			i++;
		while (*s != c && *s)
			s++;
		if (!*s)
			break ;
		s++;
	}	
	return (i);
}

static char	*ft_strndup(const char *s, int n, char **arr)
{
	char	*rtn;

	rtn = malloc(sizeof(char) * n + 1);
	if (rtn == NULL)
	{
		free(arr);
		return (0);
	}
	ft_memcpy(rtn, s, n);
	rtn[n] = '\0';
	return (rtn);
}

static char	**ft_strmalldup(char **arr, const char *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (*s)
	{
		while (*s != c && *s)
		{
			i++;
			s++;
		}
		if ((*s == c && *s && *(s - 1) != c) || (!*s && *(s - 1) != c))
		{
			arr[j] = ft_strndup(s - i, i, arr);
			j++;
			i = 0;
		}
		if (!*s)
			break ;
		s++;
	}
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		w_count;

	if (!s)
	{
		arr = malloc(sizeof(char *));
		if (arr == NULL)
			return (NULL);
		*arr = 0;
		return (arr);
	}
	while (*s == c && *s)
		s++;
	w_count = wcount(s, c);
	arr = malloc(sizeof(char *) * (w_count + 1));
	if (arr == NULL)
		return (NULL);
	ft_strmalldup(arr, s, c);
	arr[w_count] = NULL;
	return (arr);
}
