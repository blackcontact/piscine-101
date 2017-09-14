/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschneid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/14 17:19:08 by mschneid          #+#    #+#             */
/*   Updated: 2017/09/14 17:33:58 by mschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		match(char *s1, char *s2);

int		main(void)
{
	char	s1[] = "Salut les zouzous";
	char	s2[] = "Salut les zouzous";
	printf("%d\n", match(s1,s2));
	return (0);
}
