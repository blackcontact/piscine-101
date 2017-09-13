/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschneid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/12 14:46:51 by mschneid          #+#    #+#             */
/*   Updated: 2017/09/12 19:16:55 by mschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_is_prime(int nb);

int		main(void)
{
	printf("%d", ft_is_prime(14));
	printf("%d", ft_is_prime(13));
	printf("%d", ft_is_prime(12));
	printf("%d", ft_is_prime(11));
	printf("%d", ft_is_prime(10));
	printf("%d", ft_is_prime(9));
	printf("%d", ft_is_prime(8));
	printf("%d", ft_is_prime(7));
	printf("%d", ft_is_prime(6));
	printf("%d", ft_is_prime(1));
	return (0);
}
