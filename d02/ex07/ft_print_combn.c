/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschneid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/08 14:26:10 by mschneid          #+#    #+#             */
/*   Updated: 2017/09/08 17:49:09 by mschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_putchar (char c)
{
	write (1, &c, 1);
}

void ft_print_combn_display(char *display, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		ft_putchar(display[i]);
		i++;
	}
}

void ft_print_combn_update(char *combarr, int n)
{
	int i;

	combarr[n - 1]++;
	if (combarr[n - 1] > '9')
	{
		
	}
}



void ft_print_combn (int n)
{
	char combarr[n];
	int i;

	combarr[0] = '0';
	i = 1;
	while (i < n)
	{
		combarr[i] = combarr[i - 1] + 1;
		i++;
	}
	ft_print_combn_display(combarr, n);
	printf("%c", combarr[1]);
}

int main (void)
{
	ft_print_combn(5);
	
	return (0);
}
