/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calebmambwe <calebmambwe@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/11 17:31:26 by calebmambwe       #+#    #+#             */
/*   Updated: 2020/01/11 17:45:21 by calebmambwe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int i = 128;

	while (i)
	{
		if(i & octet)
			write(1,"1",1);
		else
			write(1,"0",1);
		i = i /2;
	}
}

int main(void)
{
	print_bits(20);
	return(0);
}
