/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calebmambwe <calebmambwe@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 15:34:18 by calebmambwe       #+#    #+#             */
/*   Updated: 2020/01/13 16:00:46 by calebmambwe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strchar(char c, char *str)
{
	while(*str)
	{
		if(*str == c)
			return(1);
		++str;
	}
	return(0);
}
void hidenp(char *str1, char *str2)
{

	while(*str1)
	{
		while(*str1 != *str2 && *str2 != '\0')
			++str2;
		if(*str2 == '\0')
		{
			write(1,"0",1);
			return;
		}
		++str1;
		++str2;
	}
	write(1,"1",1);
}

#include <stdio.h>

int main(int ac, char **av)
{
	int i = 0;
	if(ac == 3)
	{
		hidenp(&av[1][i],&av[2][i]);
	}
	write(1,"\n",1);
	return(0);
}
