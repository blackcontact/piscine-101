/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschneid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/08 22:32:58 by mschneid          #+#    #+#             */
/*   Updated: 2017/09/08 22:57:36 by mschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int a2;
	int b2;

	a2 = *a;
	b2 = *b;
	*a = a2 / b2;
	*b = a2 % b2;
}

int		main(void)
{
	int a;
	int b;
	int *ptr_a;
	int *ptr_b;

	ptr_a = &a;
	ptr_b = &b;
	a = 4;
	b = 9;
	ft_ultimate_div_mod(ptr_a, ptr_b);
	printf("%d", a);
	printf(", ");
	printf("%d", b);

	return (0);
}
