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
	int		count;
	
	if (power < 0 || nb == 0)
	{
		return (0); 
	}
	if (power > 0)
	{
		count = nb * ft_recursive_power(nb, power -1);
		return (count);
	}
	else 
	return (1);
}
