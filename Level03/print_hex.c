/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calebmambwe <calebmambwe@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 17:43:51 by calebmambwe       #+#    #+#             */
/*   Updated: 2020/01/13 17:59:51 by calebmambwe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_atoi(char *str)
{
	int n = 0;

	while(*str != 0)
	{
		n = (n * 10) + (*str - '0');
		++str;
	}
	return(n);
}

void print_hex(int n)
{
	char hex_degits[] = "0123456789abcdef";
	if(n >= 16)
		print_hex(n / 16);
	write(1, &hex_degits[n % 16],1);
}

int main(int ac, char **av)
{
	if(ac == 2)
		print_hex(ft_atoi(av[1]));
	write(1,"\n",1);
	return(0);
}
