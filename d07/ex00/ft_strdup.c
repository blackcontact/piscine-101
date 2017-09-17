/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschneid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/15 22:32:28 by mschneid          #+#    #+#             */
/*   Updated: 2017/09/16 11:14:06 by mschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*strdup;

	i = 0;
	if (!(strdup = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	while (src[i] != '\0')
	{
		strdup[i] = src[i];
		i++;
	}
	strdup[i] = '\0';
	return (strdup);
}
