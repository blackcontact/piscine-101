/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschneid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 11:16:46 by mschneid          #+#    #+#             */
/*   Updated: 2017/09/18 20:48:03 by mschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int		g_skipfirstsoluce;

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

int		sudoku_solve(int sudoku[9][9], int *ztofind, int zi, int zi_stop)
{
	int i;

	if (zi == zi_stop)
		return (1);
	i = 1;
	while (i <= 9)
	{
		if (sk_isok(sudoku, i, (ztofind[zi] / 10), (ztofind[zi] % 10)))
		{
			sudoku[(ztofind[zi] / 10)][(ztofind[zi] % 10)] = i;
			if (sudoku_solve(sudoku, ztofind, zi + 1, zi_stop))
			{
				if (g_skipfirstsoluce == 0)
					return (1);
				else
					g_skipfirstsoluce = 0;
			}
		}
		sudoku[(ztofind[zi] / 10)][(ztofind[zi] % 10)] = 0;
		i++;
	}
	return (0);
}

int		checkuserargv(int argc, char *argv[])
{
	int i;
	int j;

	i = 1;
	if (argc != 10)
		return (0);
	while (i < 10)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			j++;
			if (!((argv[i][j] >= '1' && argv[i][j] <= '9') ||
						(argv[i][j] == '.') || (argv[i][j] == '\0')))
				return (0);
		}
		if (j != 9)
			return (0);
		i++;
	}
	return (1);
}

int		main(int argc, char *argv[])
{
	int		sudoku[9][9];
	int		zcount;
	int		*ztofind;

	if (!checkuserargv(argc, argv))
	{
		ft_putstr("Error\n");
		return (0);
	}
	zcount = sk_fillarray(argv, sudoku);
	ztofind = sk_positions(sudoku, zcount);
	g_skipfirstsoluce = 1;
	if (sudoku_solve(sudoku, ztofind, 0, zcount))
	{
		ft_putstr("Error\n");
		return (0);
	}
	sk_fillarray(argv, sudoku);
	if (sudoku_solve(sudoku, ztofind, 0, zcount))
		sk_display(sudoku);
	else
		ft_putstr("Error\n");
	return (0);
}
