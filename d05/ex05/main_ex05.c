/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschneid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/13 16:33:42 by mschneid          #+#    #+#             */
/*   Updated: 2017/09/18 19:12:19 by mschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>


char	*ft_strstr(char *str, char *to_find);

int		main(void)
{
	char *str = "abcdefgh";
	char *to_find = "efg";
	printf("%s\n", ft_strstr(str, to_find));
	char *str2 = "abcdefgh";
	char *to_find2 = "efg";
	printf("%s", strstr(str2, to_find2));
	return (0);
}
