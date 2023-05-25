/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 10:27:02 by antoda-s          #+#    #+#             */
/*   Updated: 2023/05/25 00:12:28 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libftprintf.h"

/*
char	*ft_strchr(const char *s, int c)
{
	unsigned char	*p_s;

	p_s = (unsigned char *)s;
	while (*p_s && *p_s != (unsigned char)c)
		p_s++;
	if (c == '\0' || *p_s == (unsigned char)c)
		return ((char *)p_s);
	return (NULL);
}
*/

/// @brief 		Locates the first occurrence of c (converted to an 
///				unsigned char) in the string pointed to by s.
/// @param s 		string to search
/// @param c 		character to search for	
/// @return 		pointer to the located c, or NULL if c not found
char	*ft_strchr(const char *s, int c)
{
	while (*s && *s != (unsigned char)c)
		s++;
	if (c == '\0' || *s == (unsigned char)c)
		return ((char *)s);
	return (NULL);
}
