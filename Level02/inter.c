/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calebmambwe <calebmambwe@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 17:39:38 by calebmambwe       #+#    #+#             */
/*   Updated: 2020/01/11 13:47:22 by calebmambwe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_inter(char *a,char *b)
{
	int i = 0;
	char arr[256];

	while(b[i])
	{
		arr[(int)b[i]] = 1;
		i++;
	}
	while(a[i])
	{
		if(arr[(int)a[i]])
		{
			write(1,&a[i],1);
			arr[(int)a[i]] = 0;
		}
		i++;
	}
}

#include <stdio.h>

int main()
{
	char str1[] = "THis";
	char str2[] = "hashduahuhsdigrys";
	ft_inter(str1,str2);
	return(0);
}
