/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschneid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/08 22:11:03 by mschneid          #+#    #+#             */
/*   Updated: 2017/09/08 22:27:59 by mschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int		main(void)
{
	int		a;
	int		b;
	int		div;
	int		mod;
	int		*ptrdiv;
	int		*ptrmod;

	a = 8;
	b = 3;
	ptrdiv = &div;
	ptrmod = &mod;
	ft_div_mod(a, b, ptrdiv, ptrmod);
	printf("div=");
	printf("%d",div);
	printf("\n");
	printf("mod=");
	printf("%d",mod);

	return (0);
}
