/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:28:07 by antoda-s          #+#    #+#             */
/*   Updated: 2023/05/25 00:39:43 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libftprintf.h"

/// @brief 		Fills the first n bytes of the memory area pointed to by s with
///				the constant byte c.
/// @param s 		pointer to the memory area to fill
/// @param c 		value to be set
/// @param n 		number of bytes to be set to the value
/// @return 		pointer to the memory area original s
void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p_s;

	p_s = (unsigned char *)s;
	while (n--)
		*p_s++ = (unsigned char)c;
	return (s);
}
