/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschneid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/07 21:22:14 by mschneid          #+#    #+#             */
/*   Updated: 2017/09/07 21:39:41 by mschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar (char c);

void	ft_print_comb2_display(char a, char b, char c, char d)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(' ');
	ft_putchar(c);
	ft_putchar(d);
}

void	ft_print_comb2_comma(int end)
{
	if (end)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2_loop(char a, char b, char c, char d)
{
	int		end;

	end = 1;
	while (end)
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
		if ((a == '9') && (b == '8') && (c == '9') && (d == '9'))
		{
			end = 0;
		}
		ft_print_comb2_display(a, b, c, d);
		ft_print_comb2_comma(end);
	}
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;
	char	c;
	char	d;

	a = '0';
	b = '0';
	c = '0';
	d = '0';

	ft_print_comb2_loop(a, b, c, d);
}
