/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 10:27:02 by antoda-s          #+#    #+#             */
/*   Updated: 2023/05/24 23:41:05 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libftprintf.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*phs;
	size_t	lns;

	lns = ft_strlen(little);
	phs = (char *)big;
	if (!*little)
		return (phs);
	if (len == 0 || !*phs)
		return (NULL);
	if (len > ft_strlen(big))
		len = ft_strlen(big);
	while (*phs && (size_t)(phs - big + lns) <= len)
	{
		if (!ft_strncmp(phs, little, lns))
			return (phs);
		phs++;
	}
	return (NULL);
}
