/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ex01.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschneid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/16 11:16:27 by mschneid          #+#    #+#             */
/*   Updated: 2017/09/16 12:25:30 by mschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		*ft_range(int min, int max);

int		main(void)
{
	int		min;
	int		max;
	int		*range;
	int		i;

	min = 5;
	max = 100;
	i = 0;
	range = ft_range(min, max);
	while (i < max - min)
	{
		printf("%d\n", range[i]);
		i++;
	}
	return (0);
}
