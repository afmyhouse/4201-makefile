/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 21:34:39 by antoda-s          #+#    #+#             */
/*   Updated: 2023/05/25 00:27:20 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libftprintf.h"

/// @brief 		allocates memory for an array of a elem_qty elements x elem_size
///				bytes each and returns a pointer to the allocated memory. The
///				memory is set to zero. If elem_qty or elem_size is 0, then
///				calloc() returns either NULL, or a unique pointer value that can
///				later be successfully passed to free().
/// @param elem_qty 	quantity of elements
/// @param elem_size 	size (in bytes) of each element
/// @return 			pointer to allocated memory	
void	*ft_calloc(size_t elem_qty, size_t elem_size)
{
	void	*ptr;

	if (elem_qty == 0 || elem_size == 0)
	{
		elem_qty = 1;
		elem_size = 1;
	}
	ptr = (void *)malloc (elem_qty * elem_size);
	if (!ptr)
	{
		free(ptr);
		return (NULL);
	}
	ft_bzero(ptr, elem_qty * elem_size);
	return ((void *)ptr);
}
