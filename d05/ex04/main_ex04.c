/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschneid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/13 16:06:08 by mschneid          #+#    #+#             */
/*   Updated: 2017/09/15 16:13:50 by mschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned);

int		main(int arc, char **av)
{
	if (arc >= 1)
		printf("%s", ft_strncpy(av[1], av[2], 40));
	return (0);
}
