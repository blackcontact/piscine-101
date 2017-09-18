/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschneid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/14 17:17:44 by mschneid          #+#    #+#             */
/*   Updated: 2017/09/17 12:56:02 by mschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	ft_fillstr(int *tab, int nbr, int size)
{
	int		i;

	i = 0;
	while (i < size)
	{
		tab[i] = nbr;
		i++;
	}
}

void	match_process2(char *s1, char *s2, int *tab, int *old_tab)
{
	int		i;
	int		j;

	i = 1;
	while (i <= ft_strlen(s1))
	{
		j = 0;
		while (j <= ft_strlen(s2))
		{
			old_tab[j] = tab[j];
			if (j == 0)
				tab[j] = 0;
			if (s2[j - 1] == '*')
				tab[j] = (tab[j] || tab[j - 1]);
			else if (s2[j - 1] == s1[i - 1])
				tab[j] = old_tab[j - 1];
			else
				tab[j] = 0;
			j++;
		}
		i++;
	}
}

int		match_process(char *s1, char *s2, int size_s2)
{
	int		*tab;
	int		*old_tab;
	int		i;

	if (!(tab = (int *)malloc(sizeof(int) * (size_s2 + 1))))
		return (0);
	if (!(old_tab = (int *)malloc(sizeof(int) * (size_s2 + 1))))
		return (0);
	ft_fillstr(tab, 0, size_s2);
	ft_fillstr(old_tab, 0, size_s2);
	tab[0] = 1;
	old_tab[0] = 1;
	i = 1;
	while (i <= size_s2)
	{
		if (s2[i - 1] == '*')
			tab[i] = tab[i - 1];
		i++;
	}
	match_process2(s1, s2, tab, old_tab);
	return (tab[size_s2]);
}

int		match(char *s1, char *s2)
{
	int		size_s2;

	size_s2 = ft_strlen(s2);
	return (match_process(s1, s2, size_s2));
}
