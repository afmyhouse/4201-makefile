/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pf_tools_1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 14:13:52 by antoda-s          #+#    #+#             */
/*   Updated: 2023/05/25 01:04:59 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libftprintf.h"

/// @brief 		negative SIGNAL flag if "arg" passed by address is negative
/// @param f 	struct where to store the flag SIGNAL
/// @param arg 	number to eval signal
void	ft_pf_fwp_u(t_printf *f, void *arg)
{
	long double	ld_arg;
	int			li_arg;

	if ((*f).at == 'i' || (*f).at == 'd')
	{
		li_arg = *(int *)arg;
		if (li_arg < 0)
		{
			li_arg *= -1;
			(*f).f_stype = '-';
		}
		*(int *)arg = li_arg;
	}
	else if ((*f).at == 'f' || (*f).at == 'a' || (*f).at == 'A' || \
		(*f).at == 'e' || (*f).at == 'E')
	{
		ld_arg = *(long double *)arg;
		if (ld_arg < 0)
		{
			ld_arg *= -1;
			(*f).f_stype = '-';
		}
		*(long double *)arg = ld_arg;
	}
}

/// @brief 			convert number to equivalent char with radix
/// @param n 			number to convert (0-15)
/// @param arg_type 	x or X hex base specifier of the number type
/// @return 			char (0-9, a-f, A-F) equivalent to the number passed
char	ft_dig2hex(const int n, char arg_type)
{
	char	c;

	if (n >= 0 && n <= 9)
		c = 0x30 + (char)n;
	else if (n > 9 && n < 16)
		c = (char)((n - 10) + (arg_type - 23));
	else
		c = (char)n;
	return (c);
}

/// @brief 		reverts the order of an array contents
/// @param str 	the string to revert
/// @param j 	length of the array pointed by str
/// @return
char	*ft_strrev(char *str, int j)
{
	char	temp;
	int		i;

	i = 0;
	j = ft_strlen(str) - 1;
	if ((j - i) <= 0)
		return (str);
	while (i <= j)
	{
		temp = str[i];
		str[i++] = str[j];
		str[j--] = temp;
	}
	return (str);
}

/// @brief 		using the char specifier determines de radix of the arg
/// @param base the specifier of the number type
/// @return 	a number equal to the radix :2(b), 8(o), 16(x, X)), 10(else)
char	ft_radix_char2num(char base)
{
	if (base == 'b')
		return (2);
	else if (base == 'o')
		return (8);
	else if (base == 'x' || base == 'X' || base == 'a' || \
		base == 'A' || base == 'p')
		return (16);
	else
		return (10);
}
/*
/// @brief 		checks if a char is a decimal digit
/// @param c the char to check
/// @return 1 if true 1 otherwise
int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}*/
