/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschneid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/07 19:52:25 by mschneid          #+#    #+#             */
/*   Updated: 2017/09/07 19:53:22 by mschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar (char c);

void ft_print_comb2(void)
{
	char a = '0';
	char b = '0';
	char c = '0';
	char d = '0';
	int end = 1;

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
		if ( (a == '9') && (b == '8') && (c == '9') && (d == '9'))
		{
			end = 0;
		}
		ft_putchar (a);
		ft_putchar (b);
		ft_putchar (' ');
		ft_putchar (c);
		ft_putchar (d);
		if (end)
		{
			ft_putchar (',');
			ft_putchar (' ');
		}
	}
}
