/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschneid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/14 10:41:42 by mschneid          #+#    #+#             */
/*   Updated: 2017/09/14 10:45:25 by mschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_lowercase(char *str)
{
	int		result;
	int		i;

	i = 0;
	result = 1;
	while (str[i] != '\0' && result)
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			result = 0;
		i++;
	}
	return (result);
}
