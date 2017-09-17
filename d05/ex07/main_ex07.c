/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ex07.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschneid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/13 21:44:13 by mschneid          #+#    #+#             */
/*   Updated: 2017/09/15 12:02:16 by mschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n);

int		main(void)
{
	char *s1 = "aaaaaaaa";
	char *s2 = "aaaaaaa";
	unsigned int n = 9;

	printf("%d", ft_strncmp(s1, s2, n));
	return (0);
}
