/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calebmambwe <calebmambwe@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 17:02:48 by calebmambwe       #+#    #+#             */
/*   Updated: 2020/01/13 17:21:47 by calebmambwe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

 unsigned int    lcm(unsigned int a, unsigned int b)
 {
    if(a == 0 || b == 0)
        return(0);

    unsigned int n;
    if(a > b)
        n = a;
    else
        n = b;
    while(1)
    {
        if(n % a == 0 && n % b == 0 )
            return(n);
        ++n;
    }
 }

 #include <stdio.h>

 int main(void)
 {
    printf("%u\n", lcm(2,5));
    return(0);
 }
