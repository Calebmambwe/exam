/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calebmambwe <calebmambwe@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/09 19:20:18 by calebmambwe       #+#    #+#             */
/*   Updated: 2020/01/09 19:46:22 by calebmambwe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(const char *str)
{
	int i = 0;
	int nbr = 0;
	int sign = 1;

	if(str[i] == '-')
		sign = -1;

	while(str[i])
	{
		if(str[i] && (str[i] >= '0' && str[i] <= '9'))
			nbr = nbr * 10 + str[i] - '0';
		i++;
	}
	return(nbr * sign);
}

#include <stdio.h>

int main(void)
{
	printf("%d",ft_atoi("-123g"));
	printf("\n");
	return(0);
}
