/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ex10.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschneid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/13 22:58:40 by mschneid          #+#    #+#             */
/*   Updated: 2017/09/19 18:55:40 by mschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str);

int		main(void)
{
	char	str[] = "Rekjfdjlsfdm./,fd.ds.fdsfdsfd.dfd,fdsfdsf,45dsdfd42";

	printf("%s", ft_strcapitalize(str));
	return (0);
}
