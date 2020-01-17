/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calebmambwe <calebmambwe@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/09 14:54:37 by calebmambwe       #+#    #+#             */
/*   Updated: 2020/01/09 15:13:49 by calebmambwe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
void	ft_swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

// int main (void)
// {
// 	int a = 10;
// 	int b = 20;

// 	int *ptr1;
// 	int *ptr2;

// 	ptr1 = &a;
// 	ptr2 = &b;

// 	ft_swap(ptr1,ptr2);
// 	printf("%u",ptr1);
// 	return(0);
// }

