/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 22:50:17 by antoda-s          #+#    #+#             */
/*   Updated: 2023/05/25 00:38:12 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libftprintf.h"

/// @brief 		moves n bytes from src to dest. The two strings may overlap
///				(see memmove(3))
/// @param dest 	destination memory area
/// @param src 		source memory area
/// @param n 		number of bytes to move
/// @return 		pointer to original dest
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*p_dest;
	unsigned char	*p_src;

	p_dest = (unsigned char *)dest;
	p_src = (unsigned char *)src;
	if (n != 0 && p_dest != p_src)
	{
		if (p_dest < p_src)
		{
			while (n--)
			*p_dest++ = *p_src++;
		}
		else if (p_dest > p_src)
		{
			p_dest = (unsigned char *)dest + (n -1);
			p_src = (unsigned char *)src + (n -1);
			while (n--)
				*p_dest-- = *p_src--;
		}
	}
	return (dest);
}
