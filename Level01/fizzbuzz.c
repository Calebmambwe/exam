/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calebmambwe <calebmambwe@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/09 13:47:47 by calebmambwe       #+#    #+#             */
/*   Updated: 2020/01/09 14:14:57 by calebmambwe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void putnbr(int n)
{
	if(n >= 10)
		putnbr(n / 10);
	char c = (n % 10) + '0';
	write(1,&c,1);
}

#include <stdio.h>

int main(void)
{

	int i;

	i = 1;

	while(i <= 100)
	{
		if (i % 5 == 0 && i % 3 == 0)
			write(1,"fizzbuzz",8);
		else if(i % 5 == 0 )
			write(1,"buzz",4);
		else if(i % 3 == 0 )
			write(1,"fizz",4);
		else
			putnbr(i);
		write(1,"\n",1);
		++i;
	}
	return(0);
}
