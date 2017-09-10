/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschneid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/10 09:58:25 by mschneid          #+#    #+#             */
/*   Updated: 2017/09/10 11:40:25 by mschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar(char c);

void	rush_generator(int x, int y)
{
	int		xi;
	int		yi;

	yi = 1;
	while (yi <= y)
	{
		xi = 1;
		while (xi <= x)
		{
			if (yi == 1 && xi == 1)
				ft_putchar('A');
			else if ((yi == y && xi == x) && y != 1 && x != 1)
				ft_putchar('A');
			else if ((xi == x && yi == 1) || (xi == 1 && yi == y))
				ft_putchar('C');
			else if ((yi == 1 || yi == y) || (xi == 1 || xi == x))
				ft_putchar('B');
			else
				ft_putchar(' ');
			xi++;
		}
		ft_putchar('\n');
		yi++;
	}
}

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
		rush_generator(x, y);
}
