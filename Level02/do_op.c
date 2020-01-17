/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calebmambwe <calebmambwe@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/09 18:36:39 by calebmambwe       #+#    #+#             */
/*   Updated: 2020/01/09 19:17:36 by calebmambwe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	int i = 0;
	int result = 0;
	int a = atoi(&av[1][i]);
	int b = atoi(&av[3][i]);

	if(ac == 4)
	{
		if(av[2][0] == '*')
			result = a * b;
		else if(av[2][0] == '+')
			result = a + b;
		else if(av[2][0] == '-')
			result = a - b;
		else if(av[2][0] == '/')
			result = a / b;
		else if(av[2][0] == '%')
			result = a % b;
			printf("%d",result);
	}
	printf("\n");
	return(0);
}
