/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calebmambwe <calebmambwe@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/11 14:52:37 by calebmambwe       #+#    #+#             */
/*   Updated: 2020/01/11 15:29:06 by calebmambwe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_power_of_2(unsigned int n)
{
	unsigned long power = 1;

	while (power < n)
		power = 2 * power;

	if (power == n)
		return (1);
	else
		return (0);
}

#include <stdio.h>
int	main(void)
{
	unsigned int n = 31;
	printf("Is %u a power of 2? %d\n", n, is_power_of_2(n));
}
