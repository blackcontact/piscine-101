/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschneid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/07 21:22:14 by mschneid          #+#    #+#             */
/*   Updated: 2017/09/08 10:18:10 by mschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb2_coma(void)
{
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print_comb2_display(char a, char b, char c, char d)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(' ');
	ft_putchar(c);
	ft_putchar(d);
}

void	ft_print_comb2_loop(char a, char b, char c, char d)
{
	while (a <= '9')
	{
		while (b <= '9')
		{
			while (c <= '9')
			{
				while (d <= '9')
				{
					ft_print_comb2_display(a, b, c, d);
					if (!(a == '9' && b == '8'))
						ft_print_comb2_coma();
					d++;
				}
				d = '0';
				c++;
			}
			b++;
			d = b + 1;
			c = a;
		}
		b = '0';
		d = b + 1;
		c = a + 1;
		a++;
	}
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
	d = '1';
	ft_print_comb2_loop(a, b, c, d);
}
