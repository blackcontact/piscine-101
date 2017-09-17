/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschneid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/12 09:54:20 by mschneid          #+#    #+#             */
/*   Updated: 2017/09/16 15:04:54 by mschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt_process(int nb, int limit)
{
	if (nb * nb > limit)
		return (0);
	if (nb * nb == limit)
		return (nb);
	return (ft_sqrt_process(nb + 1, limit));
}

int		ft_sqrt(int nb)
{
	if (nb == 0)
		return (0);
	else
		return (ft_sqrt_process(1, nb));
}
