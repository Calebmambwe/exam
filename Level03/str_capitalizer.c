/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calebmambwe <calebmambwe@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 18:29:08 by calebmambwe       #+#    #+#             */
/*   Updated: 2020/01/13 18:45:00 by calebmambwe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void str_capitalizer(char *str)
{
	int i = 0;
	while(str[i])
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if(str[0] >= 'a' && str[0] <= 'z')
			str[0] -= 32;
		if((str[i] >= 'a' && str[i] <= 'z') && (str[i - 1] == ' ' || str[i - 1] == '\t'))
			str[i] -= 32;

		write(1,str + i,1);
		i++;
	}
}

int main(int ac, char **av)
{
	int i = 1;
	if(ac > 1)
	{
		while(i < ac)
		{
			str_capitalizer(av[1]);
			i++;
		}
	}
	write(1,"\n",1);
	return(0);
}
