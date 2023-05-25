/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 14:30:13 by antoda-s          #+#    #+#             */
/*   Updated: 2023/05/24 23:45:54 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libftprintf.h"

/// @brief 		writes a character to a file descriptor
/// @param c 	character to write
/// @param fd 	file descriptor
void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
