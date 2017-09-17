/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ex02.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschneid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/16 13:22:27 by mschneid          #+#    #+#             */
/*   Updated: 2017/09/16 14:10:38 by mschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_ultimate_range(int **range, int min, int max);

int		main(void)
{
	int		min;
	int		max;
	int		*range;
	int		i;

	min = 5;
	max = 100;
	i = 0;
	ft_ultimate_range(&range, min, max);
	while (i < max - min)
	{
		printf("%d\n", range[i]);
		i++;
	}
	return (0);
}
