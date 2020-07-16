/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coloots <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 12:18:47 by coloots           #+#    #+#             */
/*   Updated: 2020/07/15 14:24:22 by coloots          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_recursive_power(int nb, int power)
{
	int	i;
	
	if (power < 0 || nb == 0)
	{
		return (0); 
	}
	else if (power == 0 && nb > 0)
	{
		return (1);
	}
	while (i < power)
	{
		nb *= nb;
		i++;
	}
		return (nb);
}
