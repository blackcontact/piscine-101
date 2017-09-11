/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschneid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/09 23:29:27 by mschneid          #+#    #+#             */
/*   Updated: 2017/09/11 12:47:37 by mschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	sastantua_stars(int stars, int floor, int door_size, int stars_bd)
{
	int i;

	i = 0;
	while (i < stars)
	{
		if ((floor < door_size) && (i >= stars_bd && i < stars - stars_bd))
		{
			if (door_size >= 5 && floor == (door_size / 2)
					&& i == stars - stars_bd - 2)
				ft_putchar('$');
			else
				ft_putchar('|');
		}
		else
			ft_putchar('*');
		i++;
	}
}

void	sastantua_display(int spaces, int stars, int size, int floor)
{
	int		sti;
	int		spi;
	int		door_size;
	int		stars_bd;

	if (size > 0)
	{
		sti = 0;
		spi = 0;
		floor = (size * (5 + size) / 2) - floor;
		door_size = (size - ((size + 1) % 2));
		stars_bd = ((stars / 2) - (door_size / 2));
		while (spi < spaces)
		{
			ft_putchar(' ');
			spi++;
		}
		ft_putchar('/');
		sastantua_stars(stars, floor, door_size, stars_bd);
		ft_putchar('\\');
		ft_putchar('\n');
	}
}

int		sastantua_calcul(int size)
{
	int		step;
	int		stars;
	int		floor;

	stars = 1;
	floor = 1;
	step = 4;
	while (floor <= size)
	{
		stars = 2 * (2 + floor) + stars;
		floor = floor + 1;
		stars = stars + step;
		if ((floor % 2 == 1) && floor < size)
			step += 2;
	}
	stars = stars - step;
	return (stars);
}

void	sastantua(int size)
{
	int		i;
	int		sastantua_info[5];

	i = 0;
	sastantua_info[1] = 3;
	sastantua_info[3] = 4;
	sastantua_info[2] = 1;
	sastantua_info[0] = (sastantua_calcul(size) / 2) - 1;
	sastantua_info[4] = 1;
	while (i < ((size * (5 + size)) / 2))
	{
		i++;
		sastantua_display(sastantua_info[0], sastantua_info[2], size, i);
		if (i >= sastantua_info[1])
		{
			sastantua_info[4]++;
			sastantua_info[1] = sastantua_info[1] + sastantua_info[4] + 2;
			sastantua_info[2] = sastantua_info[2] + sastantua_info[3];
			sastantua_info[0] = sastantua_info[0] - (sastantua_info[3] / 2);
			if (sastantua_info[4] % 2 == 1)
				sastantua_info[3] += 2;
		}
		sastantua_info[2] = sastantua_info[2] + 2;
		sastantua_info[0]--;
	}
}
