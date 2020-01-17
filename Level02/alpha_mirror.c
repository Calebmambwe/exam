/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calebmambwe <calebmambwe@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/09 17:35:59 by calebmambwe       #+#    #+#             */
/*   Updated: 2020/01/09 18:03:11 by calebmambwe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
	int i;
	// int letter;
	i = 0;
	if(ac == 2)
	{
		while(av[1][i])
		{
			if(av[1][i] >= 'a' && av[1][i] <= 'z')
				av[1][i] = 'z' - (av[1][i] - 'a');
			else if(av[1][i] >= 'A' && av[1][i] <= 'Z')
				av[1][i] = 'Z' - (av[1][i] - 'A');

			write(1,&av[1][i],1);
			i++;
		}
	}
	write(1,"\n",1);
	return(0);
}
