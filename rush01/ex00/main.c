/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschneid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 11:16:46 by mschneid          #+#    #+#             */
/*   Updated: 2017/09/18 14:28:47 by mschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

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

int		sk_fillarray(char str[9][10], int sudoku[9][9])
{
	int		i;
	int		j;
	int		count;

	count = 0;
	i = 0;
	while (i < 9)
	{
		j = 0;
		while (str[i][j] != '\0')
		{
			if (str[i][j] == '.')
			{
				str[i][j] = '0';
				count++;
			}
			sudoku[i][j] = str[i][j] - '0';
			j++;
		}
		i++;
	}
	return (count);
}

void	sk_display(int sudoku[9][9])
{
	int		i;
	int		j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			ft_putchar(sudoku[i][j] + '0');
			if (j != 8)
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

int		sk_isok(int sudoku[9][9], int num, int li, int col)
{
	int i;
	int j;

	i = 0;
	while (i++ < 9)
		if (sudoku[li][i - 1] == num)
			return (0);
	i = 0;
	while (i++ < 9)
		if (sudoku[i - 1][col] == num)
			return (0);
	i = (li / 3) * 3;
	while (i <= (li / 3) * 3 + 2)
	{
		j = (col / 3) * 3;
		while (j <= (col / 3) * 3 + 2)
		{
			if (sudoku[i][j] == num)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		sudoku_solve(int sudoku[9][9], int* ztofind, int zi, int zi_stop)
{
	int i;
	int solutions;

	solutions = 0;
	if (zi == zi_stop)
		return (1);
	i = 1;
	while (i <= 9)
	{
		if (sk_isok(sudoku, i, ztofind[zi] / 10, ztofind[zi] % 10))
		{
			sudoku[ztofind[zi] / 10][ztofind[zi] % 10] = i;
			if (sudoku_solve(sudoku, ztofind, zi + 1, zi_stop))
			{
				return (1);
			}
		}
		sudoku[ztofind[zi] / 10][ztofind[zi] % 10] = 0;
		i++;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int		sudoku[9][9];
	int		count;
	int		*ztofind;
	/*char	argv[9][10] =
	{
		{"9...7...."},
		{"2...9..53"},
		{".6..124.."},
		{"84...1.9."},
		{"5.....8.."},
		{".31..4..."},
		{"..37..68."},
		{".9..5.741"},
		{"47......."},
	};*/
	if (argc == 10)
	{
		sk_fillarray(**argv, sudoku);
	}
	count = sk_fillarray(argv, sudoku);
	ztofind = sk_positions(sudoku, count);
	if (sudoku_solve(sudoku, ztofind, 0, count))
		sk_display(sudoku);
	else
		ft_putstr("Error\n");
	return (0);
}
