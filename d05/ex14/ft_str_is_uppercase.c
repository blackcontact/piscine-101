/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschneid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/14 10:47:10 by mschneid          #+#    #+#             */
/*   Updated: 2017/09/14 10:48:44 by mschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_uppercase(char *str)
{
	int		i;
	int		result;

	i = 0;
	result = 1;

	while (str[i] != '\0' && result)
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
			result = 0;
		i++;
	}
	return (result);
}
