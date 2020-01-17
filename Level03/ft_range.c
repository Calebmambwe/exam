/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calebmambwe <calebmambwe@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 14:58:41 by calebmambwe       #+#    #+#             */
/*   Updated: 2020/01/13 15:23:08 by calebmambwe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>


int     *ft_range(int start, int end)
{
	int *range;
	int len;

	len = (end >= start) ? end - start + 1 : start - end + 1;
	if (!(range = (int *)malloc(sizeof(int) * len)))
		return(NULL);
	while(len--)
		range[len] = (end >= start) ? start++ : start--;
	return(range);
}

#include <stdio.h>
int main (void)
{
	int i = 0;
	int *result = ft_range(0, 5);
	while(i < 5)
	{
		printf("The value is %d\n", result[i]);
		i++;
	}
	return (0);
}
