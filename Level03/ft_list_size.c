/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calebmambwe <calebmambwe@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 14:42:42 by calebmambwe       #+#    #+#             */
/*   Updated: 2020/01/13 14:58:29 by calebmambwe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int count = 0;
	while (begin_list)
	{
		count++;
		begin_list = begin_list->next;
	}
	return(count);
}

#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int n = 0;

	t_list *c = malloc(sizeof(t_list));
	c->next = 0;
	c->data = &n;

	t_list *b = malloc(sizeof(t_list));
	b->next = c;
	b->data = &n;

	t_list *a = malloc(sizeof(t_list));
	a->next = b;
	a->data = &n;

	printf("%d\n", ft_list_size(a));
}
