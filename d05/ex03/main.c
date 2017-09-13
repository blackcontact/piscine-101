/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschneid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/13 14:28:55 by mschneid          #+#    #+#             */
/*   Updated: 2017/09/13 14:59:50 by mschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <strings.h>

char	*ft_strcpy(char *dest, char *src);

int		main(void)
{
	char	src[] = "Salut!";
	char	dest[] = "coucou";

	printf("%s\n", dest);
	ft_strcpy(dest, src);
	printf("%s\n", dest);
	return (0);
}
