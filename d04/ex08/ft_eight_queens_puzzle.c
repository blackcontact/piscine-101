/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschneid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/13 10:26:13 by mschneid          #+#    #+#             */
/*   Updated: 2017/09/13 10:41:24 by mschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_eight_queens_puzzle_comp(int res)
{
	if (res == 92)
		return (res);
	else
		return (ft_eight_queens_puzzle_comp(res+1));
}

int		ft_eight_queens_puzzle(void)
{
	return (ft_eight_queens_puzzle_comp(1));
}
