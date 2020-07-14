/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coloots <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 11:15:10 by coloots           #+#    #+#             */
/*   Updated: 2020/07/14 16:49:45 by coloots          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */ 

int		ft_recursive_factorial(int nb)
{
	if (nb < 0)
	{
		return (0);
	}
	else if (nb == 0)
	{
		return (1);
	}
	else 
		return(nb * ft_recursive_factorial(nb-1));
}
