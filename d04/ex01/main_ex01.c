/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschneid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 18:58:02 by mschneid          #+#    #+#             */
/*   Updated: 2017/09/15 13:51:42 by mschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_recursive_factorial(int nb);

int		main(int argc, char *argv[])
{
	if (argc > 1)
		printf("%d", ft_recursive_factorial(atoi(argv[1])));
	else
		return (-1);
	return (0);
}
