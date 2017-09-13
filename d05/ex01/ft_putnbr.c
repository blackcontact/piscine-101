/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschneid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/13 11:26:06 by mschneid          #+#    #+#             */
/*   Updated: 2017/09/13 14:01:48 by mschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar(char c);

int		ft_putnbr_count(int nb)
{
	int		count;

	count = 0;
	while (nb > 0)
	{
		nb /= 10;
		count++;
	}
	return (count);
}

void	ft_putnbr_inarray(int nb, int *array)
{
	int		i;

	i = 0;
	while (nb > 0)
	{
		array[i] = nb % 10;
		nb /= 10;
		i++;
	}
}


void	ft_putnbr(int nb)
{
	int		array[ft_putnbr_count(nb)];
	int		i;

	i = ft_putnbr_count(nb) - 1;
	ft_putnbr_inarray(nb, array);
	while (i >= 0)
	{
		ft_putchar('0' + array[i]);
		i--;
	}
}
