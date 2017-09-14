/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschneid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/12 19:20:52 by mschneid          #+#    #+#             */
/*   Updated: 2017/09/14 16:23:55 by mschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime_process(int nb)
{
	int		i;

	if (nb == 2147483647)
		return (1);
	if (nb <= 1)
		return (0);
	else if (nb <= 3)
		return (1);
	else if (nb % 2 == 0 || nb % 3 == 0)
		return (0);
	i = 5;
	while (i * i <= nb)
	{
		if (nb % i == 0 || nb % (i + 2) == 0)
			return (0);
		i = i + 6;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	if (ft_is_prime_process(nb) == 1)
		return (nb);
	else
		return (ft_find_next_prime(nb + 1));
}
