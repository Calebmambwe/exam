/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calebmambwe <calebmambwe@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 17:55:11 by calebmambwe       #+#    #+#             */
/*   Updated: 2020/01/16 18:21:09 by calebmambwe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void sort_int_tab(int *tab, unsigned int size)
{
	unsigned int i = 0;
	unsigned int j;
	int temp;

	while(i < size)
	{
		j = i + 1;
		while(j < size)
		{
			if(tab[i] > tab[j])
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
}

void print_arr(int *tab,unsigned int size)
{
	unsigned int i = 0;
	while(i < size)
	{
		printf("[%d]", tab[i]);
		i++;
	}
	printf("\n");
}

int main(void)
{
	int tab[] = {5,-4,-2,1,0};
	unsigned int size = sizeof(tab) /sizeof(*tab);
	print_arr(tab,size);
	sort_int_tab(tab,size);
	print_arr(tab,size);
	return (0);
}
