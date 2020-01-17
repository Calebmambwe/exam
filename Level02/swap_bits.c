/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calebmambwe <calebmambwe@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/11 18:09:37 by calebmambwe       #+#    #+#             */
/*   Updated: 2020/01/11 18:24:27 by calebmambwe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned char	swap_bits(unsigned char octet)
{

	unsigned char result;
	unsigned char new_left_bits;
	unsigned char new_right_bits;

	new_left_bits = octet >> 4;
	new_right_bits = octet << 4;

	result = new_left_bits | new_right_bits;

	return(result);
}

#include <stdio.h>

int main(void)
{
	unsigned char test = 65;
	printf("%d\n", swap_bits(test));
	return(0);
}
