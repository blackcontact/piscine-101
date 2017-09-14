/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschneid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/12 19:21:15 by mschneid          #+#    #+#             */
/*   Updated: 2017/09/14 16:46:07 by mschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_find_next_prime(int nb);

int		main(int argc, char *argv[])
{
	(void)argc;
	printf("%d", ft_find_next_prime(atoi(argv[1])));
	return (0);
}
