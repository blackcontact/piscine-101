/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschneid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/14 10:51:31 by mschneid          #+#    #+#             */
/*   Updated: 2017/09/14 11:02:48 by mschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	int		i;
	int		result;

	i = 0;
	result = 1;
	while (str[i] != '\0' && result)
	{
		if ((str[i] < 32 || str[i] == 127))
		{
			result = 0;
		}
		i++;
	}
	return (result);
}
