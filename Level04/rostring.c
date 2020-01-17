/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calebmambwe <calebmambwe@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 17:16:26 by calebmambwe       #+#    #+#             */
/*   Updated: 2020/01/16 17:52:50 by calebmambwe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	int i = 0;
	int j;

	if(ac == 2)
	{
		while (av[1][i] && (av[1][i] == ' ' || av[1][i] == '\t'))
		{
			i++;
		}
		j = i;
		while(av[1][i])
		{
			while(av[1][i] && (av[1][i] != ' ' && av[1][i] != '\t'))
			{
				i++;
			}
			while(av[1][i] && (av[1][i] == ' ' || av[1][i] == '\t'))
			{
				i++;
			}
			while(av[1][i] && (av[1][i] != ' ' && av[1][i] != '\t' ) && (av[1][i - 1] == ' ' || av[1][i - 1] == '\t'))
			{
				while(av[1][i] && (av[1][i] != ' ' && av[1][i] != '\t'))
				{
					write(1,&av[1][i],1);
					i++;
				}
				write(1," ",1);
				i++;
			}
		}
		while(av[1][j] && (av[1][j] != ' ' && av[1][i] != '\t'))
		{
			write(1,&av[1][j],1);
			j++;
		}
	}
	write(1,"\n",1);
	return(0);
}
