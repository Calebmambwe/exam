/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calebmambwe <calebmambwe@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/11 15:31:41 by calebmambwe       #+#    #+#             */
/*   Updated: 2020/01/11 17:08:09 by calebmambwe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void last_word(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		++i;
	while (i >= 0 && (str[i] == ' ' || str[i] == '\t' || str[i] == '\0'))
		--i;
	while (i >= 0 && str[i] != ' ' && str[i] != '\t')
		--i;
	++i;
	while (str[i] != '\0' && str[i] != ' ' && str[i] != '\t')
	{
		write(1, str + i, 1);
		++i;
	}
}


int main(int ac, char **av)
{
	if(ac == 2)
	{
		last_word(av[1]);
	}
	write(1,"\n",1);
	return(0);
}
