/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschneid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/07 21:22:14 by mschneid          #+#    #+#             */
/*   Updated: 2017/09/07 22:42:19 by mschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2_display(char a, char b, char c, char d)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(' ');
	ft_putchar(c);
	ft_putchar(d);
}

void	ft_print_comb2_coma(int end)
{
	if (end)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

int		ft_print_comb2_testend(char a, char b, char c, char d)
{
	int output;

	output = 0;
	if ((a == '9') && (b == '8') && (c == '9') && (d == '9'))
	{
		output = 1;
	}
	return (output);
}

void	ft_print_comb2(void)
{
	char a;
	char b;
	char c;
	char d;

	a = '0';
	b = '0';
	c = '0';
	d = '0';
	while (!ft_print_comb2_testend(a, b, c, d))
	{
		d++;
		if (d > '9')
		{
			d = '0';
			c++;
			if (c > '9')
			{
				b++;
				if (b > '9')
				{
					a++;
					b = '0';
				}
				c = a;
				d = b + 1;
				if (d > '9')
				{
					d = '0';
					c++;
				}
			}
		}
		ft_print_comb2_display(a, b, c, d);
		ft_print_comb2_coma(!ft_print_comb2_testend(a, b, c, d));
	}
}

int		main(void)
{
	ft_print_comb2();
	return (0);
}
