/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschneid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 21:01:35 by mschneid          #+#    #+#             */
/*   Updated: 2017/09/18 21:15:05 by mschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		*sk_positions(int sudoku[9][9], int znb)
{
	int		i;
	int		j;
	int		count;
	int		*ztofind;

	ztofind = (int *)malloc(sizeof(int) * znb);
	i = 0;
	count = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			if (sudoku[i][j] == 0)
			{
				ztofind[count] = (i * 10) + j;
				count++;
			}
			j++;
		}
		i++;
	}
	return (ztofind);
}

int		sk_fillarray(char *str[], int sudoku[9][9])
{
	int		i;
	int		j;
	int		count;

	count = 0;
	i = 0;
	while (i < 9)
	{
		j = 0;
		while (str[i + 1][j] != '\0')
		{
			if (str[i + 1][j] == '.')
			{
				str[i + 1][j] = '0';
				count++;
			}
			sudoku[i][j] = str[i + 1][j] - '0';
			j++;
		}
		i++;
	}
	return (count);
}
