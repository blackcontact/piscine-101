/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschneid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/08 20:39:57 by mschneid          #+#    #+#             */
/*   Updated: 2017/09/08 22:05:22 by mschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

int		main(void)
{
	int		a;
	int		b;
	int		*ptra;
	int		*ptrb;

	a = 4;
	b = 16;
	ptra = &a;
	ptrb = &b;
	printf("a = ");
	printf("%d", a);
	printf(" - ");
	printf("b = ");
	printf("%d", b);
	printf("\n");
	ft_swap(ptra, ptrb);
	printf("a = ");
	printf("%d", a);
	printf(" - ");
	printf("b = ");
	printf("%d", b);
}
