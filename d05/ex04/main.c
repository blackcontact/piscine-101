/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschneid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/13 16:06:08 by mschneid          #+#    #+#             */
/*   Updated: 2017/09/13 16:33:08 by mschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned);

int		main(void)
{
	char	str1[] = "hey you";
	char	str2[40];
	printf("%s", ft_strncpy(str2, str1, 4));
	return (0);
}
