/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ex10.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschneid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/13 22:58:40 by mschneid          #+#    #+#             */
/*   Updated: 2017/09/14 10:04:41 by mschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str);

int		main(void)
{
	char	str[] = "on-va manger des chips. t'entends ? des chips ! lol+mdr";

	printf("%s", ft_strcapitalize(str));
	return (0);
}
