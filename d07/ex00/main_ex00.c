/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ex00.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschneid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/15 22:34:51 by mschneid          #+#    #+#             */
/*   Updated: 2017/09/16 11:13:37 by mschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strdup(char *src);

int		main(void)
{
	char	src[] = "Salut les zouzous";
	char	*cpy;

	cpy = ft_strdup(src);
	printf("%s", cpy);
	return (0);
}
