/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschneid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/15 11:49:43 by mschneid          #+#    #+#             */
/*   Updated: 2017/09/15 16:40:28 by mschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while(str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

int		main(int argc, char *argv[])
{
	char	*swap;
	int		i;
	int		finish;
	int		j;

	finish = 1;
	i = 0;
	j = 0;
	while (finish == 1)
	{
		finish = 0;
		i = 0;
		while (++i < argc - 1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				swap = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = swap;
				finish = 1;
			}
		}
	}
	j = 0;
	while (++j < argc)
	{
		ft_putstr(argv[j]);
		ft_putchar('\n');
	}
	return (0);
}
