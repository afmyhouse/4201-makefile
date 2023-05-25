/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 20:36:34 by antoda-s          #+#    #+#             */
/*   Updated: 2023/05/25 00:09:19 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libftprintf.h"

/// @brief 		counts the number of splits in a string
/// @param s 		string to count splits
/// @param c 		character to split by
/// @return 		number of splits
size_t	ft_split_count(const char *s, char c)
{
	size_t	splits;
	int		split_new;

	splits = 0;
	split_new = 0;
	while (*s)
	{
		if (*s != c && split_new == 0)
		{
			split_new = 1;
			splits++;
		}
		else if (*s == c)
			split_new = 0;
		s++;
	}
	return (splits);
}

/// @brief 		slices a string by a character
/// @param s 		string to slice
/// @param c 		character to slice by
/// @return 		sliced string
char	*ft_split_slice(const char *s, char c)
{
	size_t	split_len;
	char	*split;

	split_len = 0;
	while (s[split_len] && s[split_len] != c)
		split_len++;
	split = (char *)malloc((sizeof(char) * split_len) + 1);
	if (!split)
	{
		free (split);
		return (NULL);
	}
	while (*s && *s != c)
		*split++ = *s++;
	*split = '\0';
	return (split - split_len);
}

/// @brief 		return an aarray with the splits of a string by a character
/// @param s 		string to split		
/// @param c 		character to split by
/// @return 		array of strings
char	**ft_split(char const *s, char c)
{
	char	**array;
	size_t	i_split;
	size_t	splits;

	if (!s)
		return (NULL);
	i_split = 0;
	splits = ft_split_count(s, c);
	array = (char **)malloc(sizeof(char *) * (splits + 1));
	if (!array)
	{
		free (array);
		return (NULL);
	}
	while (*s && i_split <= splits)
	{
		while (*s == c && *s)
			s++;
		if (*s && *s != c)
			array[i_split++] = ft_split_slice(s, c);
		while (*s && *s != c)
			s++;
	}
	array[i_split] = NULL;
	return (array);
}
