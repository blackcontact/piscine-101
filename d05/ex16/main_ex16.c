/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ex16.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschneid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/14 11:04:11 by mschneid          #+#    #+#             */
/*   Updated: 2017/09/16 14:47:32 by mschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int		main(void)
{
	char	str_dest[50] = "Salut les ";
	char	str_src[50] = "zouzous   ";
	//printf("strcat='%s'\n", strcat(str_dest, str_src));
	printf("strcat='%s'\n", ft_strcat(str_dest, str_src));
	return (0);
}
