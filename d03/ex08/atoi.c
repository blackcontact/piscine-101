/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschneid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/09 14:40:13 by mschneid          #+#    #+#             */
/*   Updated: 2017/09/09 16:02:42 by mschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		main(void)
{
	char str[30] = "\t+54 546";
	char test[5] = "\n";

	if (test[0] == 10)
		printf("yes");
	printf("%c.\n", str[0]);
	printf("%d.\n", atoi(str));
	
	return (0);
}