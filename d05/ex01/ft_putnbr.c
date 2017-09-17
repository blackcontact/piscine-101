/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschneid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/08 10:21:35 by mschneid          #+#    #+#             */
/*   Updated: 2017/09/11 17:55:38 by mschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_putnbr_nbrofdigits(int nb)
{
	int	count;

	count = 0;
	while (nb != 0)
	{
		nb /= 10;
		count++;
	}
	return (count);
}

int		ft_putnbr_extractdigit(int nb, int digitnb)
{
	int		i;
	char	arr[ft_putnbr_nbrofdigits(nb)];
	int		nb2;

	i = ft_putnbr_nbrofdigits(nb);
	while (i--)
	{
		nb2 = nb;
		nb = nb / 10;
		arr[i] = nb2 - nb * 10;
	}
	return (arr[digitnb]);
}

void	ft_putnbr_convertprint(int digit)
{
	char c;

	c = digit + '0';
	ft_putchar(c);
}

void	ft_putnbr(int nb)
{
	int i;
	int intmin;

	i = 0;
	intmin = 0;
	if (nb == 0)
		ft_putchar('0');
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
	}
	if (nb == -2147483648)
	{
		intmin = 1;
		nb = 214748364;
	}
	while (i < ft_putnbr_nbrofdigits(nb))
	{
		ft_putnbr_convertprint(ft_putnbr_extractdigit(nb, i));
		i++;
	}
	if (intmin)
		ft_putchar('8');
}
