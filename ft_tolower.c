/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnait-el <rnait-el@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 23:26:14 by rnait-el          #+#    #+#             */
/*   Updated: 2021/12/22 23:26:14 by rnait-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_tolower(int c)
{	
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}
