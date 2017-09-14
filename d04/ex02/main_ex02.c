/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschneid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 18:58:02 by mschneid          #+#    #+#             */
/*   Updated: 2017/09/14 16:35:45 by mschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_iterative_power(int nb, int power);

int		main(int argc, char *argv[])
{
	argc = 0;
	printf("%d",ft_iterative_power(atoi(argv[1]), atoi(argv[2])));
	return (0);
}
