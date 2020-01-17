/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calebmambwe <calebmambwe@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/09 19:50:45 by calebmambwe       #+#    #+#             */
/*   Updated: 2020/01/09 19:56:13 by calebmambwe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int    ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while(s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		++i;
	return(s1[i] - s2[i]);
}
#include <stdio.h>

int main(void)
{
	char str1[] = "That";
	char str2[] = "This";
	printf("%d", ft_strcmp(str1,str2));
	return(0);
}
