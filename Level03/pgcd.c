/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calebmambwe <calebmambwe@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 17:30:53 by calebmambwe       #+#    #+#             */
/*   Updated: 2020/01/13 17:39:42 by calebmambwe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void pgcd(int a, int b)
{
	int n = a;

	while(n > 0)
	{
		if(a % n == 0 && b % n == 0)
		{
			printf("%d", n);
			return;
		}
		--n;
	}
}

int main(int ac,char **av)
{
	if(ac == 3)
		pgcd(atoi(av[1]),atoi(av[2]));
	printf("\n");
	return(0);
}
