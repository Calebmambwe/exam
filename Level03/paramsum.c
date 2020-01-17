/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calebmambwe <calebmambwe@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 17:23:05 by calebmambwe       #+#    #+#             */
/*   Updated: 2020/01/13 18:45:29 by calebmambwe      ###   ########.fr       */
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

int main(int ac, char **av)
{
	(void)av;

	putnbr(ac -1);
	write(1,"\n",1);
	return(0);
}
