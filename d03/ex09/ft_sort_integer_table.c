/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschneid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/10 13:55:34 by mschneid          #+#    #+#             */
/*   Updated: 2017/09/10 14:16:07 by mschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_integer_table(int *tab, int size)
{
	int		i;
	int		finish;
	int		swap;

	i = 0;
	finish = 0;
	while (!finish)
	{
		finish = 1;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				swap = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = swap;
				finish = 0;
			}
			i++;
		}
		size--;
	}
}

int		main(void)
{
	int		tab[6];
	int		i;

	i = 0;
	tab[0] = 5;
	tab[1] = 1;
	tab[2] = 6;
	tab[3] = 3;
	tab[4] = 4;
	tab[5] = 2;
	ft_sort_integer_table(tab, 6);
	while (i < 6)
	{
		printf("%d", tab[i]);
		i++;
	}
	return (0);
}
