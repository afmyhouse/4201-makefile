/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 13:05:46 by antoda-s          #+#    #+#             */
/*   Updated: 2023/05/24 23:41:05 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libftprintf.h"

int	ft_itoa_len(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n && i++ >= 0)
		n /= 10;
	return (i);
}

char	*ft_itoa(int n)
{
	char		*res;
	int			a_len;
	long int	ln;

	ln = n;
	a_len = ft_itoa_len(n);
	res = (char *)malloc((a_len + 1) * sizeof(char));
	if (res)
	{
		res[a_len] = '\0';
		if (!ln)
			res[0] = '0';
		if (ln < 0)
		{
			ln = -ln;
			res[0] = '-';
		}
		while (ln && a_len-- >= 0)
		{
			res[a_len] = ln % 10 + 48;
			ln /= 10;
		}
		return (res);
	}
	return (NULL);
}
