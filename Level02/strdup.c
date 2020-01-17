/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calebmambwe <calebmambwe@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/09 20:37:51 by calebmambwe       #+#    #+#             */
/*   Updated: 2020/01/09 21:01:07 by calebmambwe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int ft_strlen(char *str)
{
	int i = 0;
	while(str[i] != '\0')
		i++;
	return(i);
}
char    *ft_strdup(char *src)
{
	int i = 0;
	int len = ft_strlen(src);

	char *str = malloc(sizeof(char) * (len + 1));
	while(src[i] != '\0')
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return(str);
}

int main(void)
{
	printf("%s",ft_strdup("String"));
	return(0);
}
