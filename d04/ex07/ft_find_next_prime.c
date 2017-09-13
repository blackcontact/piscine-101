/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschneid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/12 19:20:52 by mschneid          #+#    #+#             */
/*   Updated: 2017/09/12 19:41:56 by mschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime_process(int nb, int division)
{
	if (nb == 1)
		return (0);
	if (division == 1)
		return (1);
	if (nb % division > 0)
		return (ft_is_prime_process(nb, division - 1));
	if (nb % division == 0)
		return (0);
	else
		return (1);
}

int		ft_find_next_prime(int nb)
{
	if (ft_is_prime_process(nb, nb - 1) == 1)
		return (nb);
	else
		return (ft_find_next_prime(nb + 1));
}
