/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calebmambwe <calebmambwe@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 12:07:29 by calebmambwe       #+#    #+#             */
/*   Updated: 2020/01/13 13:04:50 by calebmambwe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_atoi(char *str)
{
	int n = 0;

	while(*str >= '0' && *str <= '9')
	{
		n = (n * 10) + (*str - '0');
		++str;
	}
	return(n);
}

void ft_putnbr(int num)
{
	if(num >= 10)
		ft_putnbr(num / 10);
	char c = (num % 10) + '0';
	write(1,&c,1);
}

int is_prime(int n)
{
	int i = 2;

	while (i < n)
	{
		if(n % i == 0)
			return(0);
		i++;

	}
	return(1);
}

void ft_add_prime_sum(int nbr)
{
	int i;
	int count;

	i = 2;
	count = 0;

	while (i <= nbr)
	{
		if(is_prime(i))
			count = count + i;
			i++;
	}
	ft_putnbr(count);
}


int main(int ac, char **av)
{
	int zero = '0';
	if(ac == 2)
		ft_add_prime_sum(ft_atoi(av[1]));
	else
		write(1,&zero,1);

	write(1,"\n",1);
	return(0);
}
