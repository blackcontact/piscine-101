/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschneid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/12 14:46:13 by mschneid          #+#    #+#             */
/*   Updated: 2017/09/12 19:20:19 by mschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_is_prime_process(int nb, int division)
{
	//printf("nb=%d ", nb);
	//printf("| division=%d | ", division);
	//printf("mod= %d\n", nb % division);
	if (nb == 1)
		return (0);
	if (division == 1)
		return (1);
	if (nb % division > 0)
		return (ft_is_prime_process(nb, division - 1));
	if (nb % division == 0)
		return (0);
	else
		return (1);
}

int		ft_is_prime(int nb)
{
	if (ft_is_prime_process(nb, nb - 1) != 0)
	{
		return(1);
	}
	else
	{
		return(0);
	}
}
