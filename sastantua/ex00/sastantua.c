/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschneid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/09 23:29:27 by mschneid          #+#    #+#             */
/*   Updated: 2017/09/09 23:43:45 by mschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	sastantua_floor(int floor)
{
	if (floor >= 1){
		ft_putchar('/');
		ft_putchar('*');
		ft_putchar('\\');
	}
}

void	sastantua(int size)
{
	sastantua_floor(size);
}

int		main(void)
{
	sastantua(1);
	return (0);
}
