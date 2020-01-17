/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrev.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calebmambwe <calebmambwe@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 16:05:47 by calebmambwe       #+#    #+#             */
/*   Updated: 2020/01/10 17:14:54 by calebmambwe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strrev(char *str)
{
	int left = -1;
	int right = 0;
	char temp;

	while(str[right] != '\0')
		right++;
	while(left < right)
	{
		temp = str[left];
		str[left] = str[right];
		str[right] = temp;

		left++;
		right--;
	}
	return(str);
}

#include <stdio.h>

int main(void)
{
	char str[] = "This";
	printf("%s",ft_strrev(str));
	return(0);
}
