/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschneid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/07 17:05:45 by mschneid          #+#    #+#             */
/*   Updated: 2017/09/07 21:20:17 by mschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_multiple(char d1, char d2, char d3, int final)
{
	ft_putchar(d1);
	ft_putchar(d2);
	ft_putchar(d3);
	if (final == 0)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb_loop(char d1, char d2, char d3)
{
	int final;

	final = 0;
	while (d1 < '7')
	{
		d3 = d3 + 1;
		if (d3 > '9')
		{
			d2 = d2 + 1;
			if (d2 > '8')
			{
				d1 = d1 + 1;
				d2 = d1 + 1;
				if (d1 >= '7')
				{
					final = 1;
				}
			}
			d3 = d2 + 1;
		}
		ft_print_multiple(d1, d2, d3, final);
	}
}

void	ft_print_comb(void)
{
	char	d1;
	char	d2;
	char	d3;

	d1 = '0';
	d2 = '1';
	d3 = '1';
	ft_print_comb_loop(d1, d2, d3);
}
