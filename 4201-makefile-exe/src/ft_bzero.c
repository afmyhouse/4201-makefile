/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:12:42 by antoda-s          #+#    #+#             */
/*   Updated: 2023/05/25 00:28:08 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libftprintf.h"

/// @brief 		Erases the data in the n bytes of the memory starting at the
///				location pointed to by s, by writing zeros (bytes = '\0')
///				to that area.
/// @param s 		pointer to the memory area to zero
/// @param n 		number of bytes to be zeroed
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
	return ;
}
