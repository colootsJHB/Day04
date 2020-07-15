/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coloots <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 08:18:29 by coloots           #+#    #+#             */
/*   Updated: 2020/07/15 17:51:03 by coloots          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_power(int nb, int power)
{
	int		i;

	if (power < 0 || nb == 0 || nb < 0)
	{
		return (0);
	}
	else if (power == 0 && nb > 0)
	{
		return (1);
	}
	else
		return (power * ft_iterative_power(nb, power -1));
}

int main (void)
{

	printf("%d", ft_iterative_power(3,3));
   return (0);
}   
