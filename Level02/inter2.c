/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calebmambwe <calebmambwe@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/11 13:51:32 by calebmambwe       #+#    #+#             */
/*   Updated: 2020/01/11 14:50:14 by calebmambwe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int strchar(char c, char *s, int max)
{
	int i = 0;
	while(s[i] != '\0')
	{
		if(max != -1 && i == max)
			return(0);
		if(s[i] == c)
			return(1);
		i++;
	}
	return(0);
}

void inter(char *a, char *b)
{
	int i = 0;

	while(a[i] != '\0')
	{
		if(strchar(a[i],b, -1) == 1 && strchar(a[i],a, i) == 0)
			write(1,&a[i],1);
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
	return (0);
}
