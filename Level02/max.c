/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calebmambwe <calebmambwe@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/11 17:09:33 by calebmambwe       #+#    #+#             */
/*   Updated: 2020/01/11 17:25:47 by calebmambwe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		max(int* tab, unsigned int len)
{
	unsigned int i = 0;

	if( len == 0 )
		return(0);

	int max = tab[0];
	while(i < len)
	{
		if(tab[i] > max)
			max = tab[i];

		i++;

	}
	return(max);
}

#include <stdio.h>

int main(void)
{
	int tab[] = {-10,-123,-12,-8,2};
	printf("%d", max(tab,5));

}
