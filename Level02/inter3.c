/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calebmambwe <calebmambwe@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 12:46:29 by calebmambwe       #+#    #+#             */
/*   Updated: 2020/01/15 13:08:17 by calebmambwe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strchar(char c, char *str, int max)
{
	int i = 0;

	while(str[i])
	{
		if(max != -1 && i == max)
			return(0);
		if(str[i] == c)
			return(1);
		i++;
	}
	return(0);
}

void inter(char *str1, char *str2)
{
	int i = 0;

	while(str1[i] != '\0')
	{
		if(ft_strchar(str1[i],str2, -1) == 1 && ft_strchar(str1[i],str1, i) == 0)
			write(1,str1 + i,1);
		++i;
	}
}

int main(int ac, char **av)
{
	if(ac == 3)
	{
		inter(av[1],av[2]);
	}
	write(1,"\n",1);
	return(0);
}
