/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calebmambwe <calebmambwe@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 13:49:00 by calebmambwe       #+#    #+#             */
/*   Updated: 2020/01/13 14:35:22 by calebmambwe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char to_lower(char c)
{
	if (c >= 'A' && c <= 'Z')
		return(c + ('a' - 'A'));
	return(c);
}

int get_digits(char c, int digits_in_base)
{

	int max_digits;
	if(digits_in_base <= 10)
		max_digits = digits_in_base + '0';
	else
		max_digits = digits_in_base - 10 + 'a';

	if(c >= '0' && c <= '9' && c <= max_digits)
		return(c - '0');
	else if(c >= 'a' && c <= 'f' && c <= max_digits)
		return(10 + c - 'a');
	else
		return(-1);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int nbr = 0;
	int sign = 1;
	int digit;

	if (*str == '-')
	{
		sign = -1;
		++str;
	}

	while((digit = get_digits(to_lower(*str),str_base)) >= 0)
	{
		nbr = (nbr * str_base) + digit;
		++str;
	}
	return(nbr * sign);
}

#include <stdio.h>

int main(void)
{
	printf("%d\n", ft_atoi_base("15690b80B", 13));
	return(0);
}
