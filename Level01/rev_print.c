/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calebmambwe <calebmambwe@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/09 15:32:47 by calebmambwe       #+#    #+#             */
/*   Updated: 2020/01/09 16:40:20 by calebmambwe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// int strlen(char *str)
// {
// 	int i;

// 	i = 0;
// 	while (str[i])
// 		i++;
// 	return(i);
// }
int main(int ac,char **av)
{
	int i;

	i = 0;
	if(ac == 2)
	{
		while (av[1][i] != 0)
			i++;
		--i;
		while (i >= 0)
		{
				write(1,&av[1][i],1);
			--i;
		}
	}
	write(1,"\n",1);
	return(0);
}
