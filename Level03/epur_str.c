/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calebmambwe <calebmambwe@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 13:05:40 by calebmambwe       #+#    #+#             */
/*   Updated: 2020/01/13 13:32:22 by calebmambwe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
	int i = 0;
	int flag = 0;

	if(ac == 2 )
	{
		while(av[1][i] == ' ' || av[1][i] == '\t')
			i++;
		while (av[1][i])
		{
			if(av[1][i] == ' ' || av[1][i] == '\t')
				flag = 1;
			if(!(av[1][i] == ' ' || av[1][i] == '\t'))
			{
				if(flag)
					write(1," ",1);
				flag = 0;
					write(1,&av[1][i],1);
			}
			i++;
		}

	}
	write(1,"\n",1);
	return(0);
}
