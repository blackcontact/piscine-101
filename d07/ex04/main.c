/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschneid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 20:26:58 by mschneid          #+#    #+#             */
/*   Updated: 2017/09/20 13:45:52 by mschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_count_words(char *str);

char	**ft_split_whitespaces(char *str);

int		main(void)
{
	char **result;
	char *str = "          d       ";
	int	i;

	i = 0;
	result = ft_split_whitespaces(str);
	printf("%d\n", ft_count_words(str));
	while (i < ft_count_words(str))
	{
		printf("%d = %s\n", i, result[i]);
		i++;
	}
	return (0);
}
