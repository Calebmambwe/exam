/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeart_alpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calebmambwe <calebmambwe@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/09 15:14:50 by calebmambwe       #+#    #+#             */
/*   Updated: 2020/01/09 15:28:14 by calebmambwe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
	int i;
	int rep;

	i = 0;
	if(ac == 2)
	{
		while(av[1][i] != '\0')
		{
			if(av[1][i] >= 'A' && av[1][i] <= 'Z')
				rep = av[1][i] - 'A';
			else if (av[1][i] >= 'a'&& av[1][i] <= 'z')
				rep = av[1][i] - 'a';
			while (rep)
			{
				write(1,&av[1][i],1);
				--rep;
			}
			write(1,&av[1][i],1);
			i++;
		}
	}
	write(1,"\n",1);
	return(0);
}
