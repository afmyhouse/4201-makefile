/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 00:49:13 by antoda-s          #+#    #+#             */
/*   Updated: 2023/05/25 00:30:22 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libftprintf.h"

/// @brief 		Compares byte string s1 against byte string s2.
/// @param s1 	pointer to first string
/// @param s2 	pointer to second string
/// @param n 	number of bytes to compare
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*p_str1;
	unsigned char	*p_str2;

	p_str1 = (unsigned char *)s1;
	p_str2 = (unsigned char *)s2;
	while (n--)
	{
		if (*p_str1++ != *p_str2++)
			return (p_str1[-1] - p_str2[-1]);
	}
	return (0);
}
