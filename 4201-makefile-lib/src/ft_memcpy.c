/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:30:36 by antoda-s          #+#    #+#             */
/*   Updated: 2023/05/25 00:32:52 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libftprintf.h"

/// @brief 		copies n bytes from memory area src to memory area dest
/// @param dest 	destiny memory area
/// @param src 		source memory area
/// @param n 		number of bytes to copy
/// @return 		pointer to original dest
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*p_dest;
	unsigned char	*p_src;

	p_dest = dest;
	p_src = (unsigned char *)src;
	if (n != 0 && p_dest != p_src)
	{
		while (n--)
			*p_dest++ = *p_src++;
	}
	return (dest);
}
