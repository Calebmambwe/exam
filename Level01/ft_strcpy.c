/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calebmambwe <calebmambwe@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/09 14:17:46 by calebmambwe       #+#    #+#             */
/*   Updated: 2020/01/09 14:37:38 by calebmambwe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char    *ft_strcpy(char *s1, char *s2)
{
	int i;

	i = 0;
	while(s2[i] != '\0')
	{
		s1[i] = s2[i];
		++i;
	}
	s1[i] = '\0';
	return(s1);
}

#include <stdio.h>

int main(void)
{
	char one[] = "This";
	char two[] = "Nop";
	ft_strcpy(one,two);

	printf("%s",one);
	return(0);
}
