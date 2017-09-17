/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschneid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/16 11:16:16 by mschneid          #+#    #+#             */
/*   Updated: 2017/09/16 12:14:18 by mschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		length;
	int		*range;
	int		i;

	if(min >= max)
		return (NULL);
	length = max - min;
	if (!(range = (int *)malloc(sizeof(int) * (length))))
		return (NULL);
	i = 0;
	while (i < length)
	{
		range[i] = min + i;
		i++;
	}
	return range;
}
