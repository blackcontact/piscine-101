/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschneid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 18:03:47 by mschneid          #+#    #+#             */
/*   Updated: 2017/09/20 16:53:29 by mschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_count_letters(char *str, int index)
{
	int		i;

	i = 0;
	while (str[index + i] != '\0' && (!(str[index + i] == ' '
					|| str[index + i] == '\n' || str[index + i] == '	')))
		i++;
	return (i);
}

int		ft_count_words(char *str)
{
	int i;
	int words;

	i = 0;
	words = 0;
	while (str[i] != '\0')
	{
		if (((i == 0) || (str[i - 1] == ' ') || (str[i - 1] == '\n')
					|| (str[i - 1] == '	')) && (!((str[i] == ' ')
						|| (str[i] == '\n') || (str[i] == '	'))))
			words++;
		i++;
	}
	return (words);
}

int		ft_split_whitespaces_proc(char **result, char *str, int words)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	while (i < words)
	{
		while (str[j] == ' ' || str[j] == '	' || str[j] == '\n')
			j++;
		if (!(result[i] = (char *)malloc(sizeof(char) *
						(ft_count_letters(str, j) + 1))))
			return (0);
		k = 0;
		while (k < ft_count_letters(str, j))
		{
			result[i][k] = str[k + j];
			k++;
		}
		result[i][k] = '\0';
		j += ft_count_letters(str, j);
		i++;
	}
	result[i] = 0;
	return (1);
}

char	**ft_split_whitespaces(char *str)
{
	char	**result;
	int		words;

	words = ft_count_words(str);
	if (!(result = (char **)malloc(sizeof(char *) * (words + 1))))
		return (NULL);
	if (!(ft_split_whitespaces_proc(result, str, words)))
		return (NULL);
	return (result);
}
