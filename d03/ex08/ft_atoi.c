/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschneid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/09 14:40:13 by mschneid          #+#    #+#             */
/*   Updated: 2017/09/09 16:55:40 by mschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int		output;
	int		i;
	int		minus_sign;

	i = 0;
	minus_sign = 0;
	output = 0;
	while (str[i] >= 9 && str[i] <= 13)
		i++;
	if (str[i] == '-')
		minus_sign = 1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		output = (output * 10) + (str[i] - 48);
		i++;
	}
	if (minus_sign)
		output = output * -1;
	return (output);
}
