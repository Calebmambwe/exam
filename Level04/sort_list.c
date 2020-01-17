/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calebmambwe <calebmambwe@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 18:23:06 by calebmambwe       #+#    #+#             */
/*   Updated: 2020/01/17 12:35:53 by calebmambwe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "sort_list.h"

int ascending(int a, int b)
{
	return(a <= b);
}

void ft_swap(int *c, int *d)
{
	int temp = *c;
	*c = *d;
	*d = temp;
}


t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	t_list *begin = lst;
	t_list +*future;

	while(lst)
	{
		future = lst->next;
		while(future)
		{
			if(!cmp(lst->data,future->data))
				ft_swap(&lst->data,&future->data);
			future = future->next;
		}
		lst = lst->next;
	}
	return(begin);
}

int main(void)
{
	sort_list();
	return(0);
}
