/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calebmambwe <calebmambwe@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 19:46:39 by calebmambwe       #+#    #+#             */
/*   Updated: 2020/01/09 13:43:42 by calebmambwe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while(*str != '\0')
	{
		write(1,str,1);
		++str;
	}
}

int main(void)
{
		ft_putstr("This");
	write(1,"\n",1);
	return(0);
}
