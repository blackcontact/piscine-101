/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschneid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 18:58:02 by mschneid          #+#    #+#             */
/*   Updated: 2017/09/14 16:40:28 by mschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_fibonacci(int index);

int		main(int argc, char *argv[])
{
	(void)argc;
	printf("%d", ft_fibonacci(atoi(argv[1])));
	return (0);
}
