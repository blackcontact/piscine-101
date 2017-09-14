/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ex17.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschneid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/14 11:57:41 by mschneid          #+#    #+#             */
/*   Updated: 2017/09/14 12:06:44 by mschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, int nb);

int		main(void)
{
	char	dest[50] = "Salut les zouzous";
	char	src[50] = "|mdr sa marche ou pas";
	int		nb = 5;

	printf("strncat:'%s'\n", strncat(dest, src, nb));
	printf("ft_strncat:'%s'\n", ft_strncat(dest, src, nb));
	return (0);
}
