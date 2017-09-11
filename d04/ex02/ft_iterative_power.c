/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschneid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 20:48:05 by mschneid          #+#    #+#             */
/*   Updated: 2017/09/11 20:51:29 by mschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int result;

	if (power <= 0)
		return (0);
	result = 1;
	while (power > 0)
	{
		result = result * nb;
		power--;
	}
	return result;
}
