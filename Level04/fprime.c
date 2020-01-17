/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calebmambwe <calebmambwe@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 20:12:00 by calebmambwe       #+#    #+#             */
/*   Updated: 2020/01/13 20:59:41 by calebmambwe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void ft_fprime(int n)
{
	int i = 1;

	if(n == 1)
		printf("1");

	while(i <= n)
	{
		if(n % i == 0)
		{
			printf("%d", i);
			if(n == i)
				break;
			printf("*");
			n /= i;
			i = 1;
		}
		i++;
	}
}

int main(int ac, char **av)
{
	if(ac == 2)
	{
		ft_fprime(atoi(av[1]));
	}
	printf("\n");
	return(0);
}
