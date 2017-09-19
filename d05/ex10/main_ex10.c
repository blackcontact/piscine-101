/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ex10.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschneid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/13 22:58:40 by mschneid          #+#    #+#             */
/*   Updated: 2017/09/19 11:51:42 by mschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str);

int		main(void)
{
	char	str[] = "Rekt17+LOl Mdr Mdr 4242l42";

	printf("%s", ft_strcapitalize(str));
	return (0);
}
