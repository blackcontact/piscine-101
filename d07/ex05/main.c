/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschneid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 16:58:32 by mschneid          #+#    #+#             */
/*   Updated: 2017/09/20 17:49:14 by mschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	**ft_split_whitespaces(char *str);

void	ft_print_words_tables(char **tab);

int		main(void)
{
	char str[] = "salut les zouzous comment allez vous      fdsfljdsjl fdsfds";

	ft_print_words_tables(ft_split_whitespaces(str));
	return (0);
}
