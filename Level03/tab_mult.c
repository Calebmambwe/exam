/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calebmambwe <calebmambwe@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 18:45:44 by calebmambwe       #+#    #+#             */
/*   Updated: 2020/01/13 19:28:36 by calebmambwe      ###   ########.fr       */
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
void putnbr(int n)
{
	if(n >= 10)
		putnbr(n / 10);
	char c = (n % 10) + '0';
	write(1,&c,1);

}

void tab_mult(int n)
{
	int i;

	i = 1 ;
	while(i <= 9)
	{
		putnbr(i);
		write(1," x ",3);
		putnbr(n);
		write(1," = ",3);
		putnbr(i * n);
		write(1,"\n",1);

		++i;
	}
}


int main(int ac, char **av)
{
	if(ac == 2)
	{
		tab_mult(ft_atoi(av[1]));
	}
	write(1,"\n",1);
	return(0);
}
