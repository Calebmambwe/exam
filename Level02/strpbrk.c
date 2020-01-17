/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strpbrk.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calebmambwe <calebmambwe@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 14:52:16 by calebmambwe       #+#    #+#             */
/*   Updated: 2020/01/10 16:32:09 by calebmambwe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int strchar(const char c, const char *str)
{
	while(*str)
	{
		if(*str == c)
			return(1);
	}
	return(0);
}

char	*ft_strpbrk(const char *s1, const char *s2)
{
	while(*s1)
	{
		if(strchar(*s1,s2) == 1)
			return((char *)s1);
		++s1;
	}
	return(0);
}
