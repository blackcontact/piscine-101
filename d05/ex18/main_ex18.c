/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ex18.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschneid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/14 12:10:20 by mschneid          #+#    #+#             */
/*   Updated: 2017/09/14 14:17:28 by mschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

//unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int				main(void)
{
	char			dest[50] = "1234";
	char			src[50] = "56789";
	unsigned int	size = 12;

	printf("%s\n", dest);
	printf("strlcat :'%lu'\n", strlcat(dest, src, size));
	printf("%s", dest);
	return (0);
}
