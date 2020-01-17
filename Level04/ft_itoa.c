/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calebmambwe <calebmambwe@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 13:19:29 by calebmambwe       #+#    #+#             */
/*   Updated: 2020/01/15 14:08:03 by calebmambwe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int absolute_value(int nbr)
{
	if(nbr < 0)
		return(-nbr);
	return(nbr);
}

int get_len(int nbr)
{
	int len = 0;

	if(nbr <= 0)
		++len;

	while(nbr != 0)
	{
		++len;
		nbr = nbr / 10;
	}
	return(len);
}


char	*ft_itoa(int nbr)
{
	char *result;
	int len;

	len = get_len(nbr);
	result = malloc(sizeof(char) * (len + 1));
	result[len] = '\0';

	if(nbr < 0)
		result[0] = '-';
	else if(nbr == 0)
		result[0] = '0';

	while(nbr != 0)
	{
		--len;
		result[len] = absolute_value(nbr % 10) + '0';
		nbr = nbr / 10;
	}

	return(result);
}

#include <stdio.h>
int main(void)
{
	printf("%s",ft_itoa(3));
	return(0);
}
