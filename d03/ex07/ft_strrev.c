/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschneid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/09 10:38:30 by mschneid          #+#    #+#             */
/*   Updated: 2017/09/09 14:32:47 by mschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strrev(char *str)
{
	int		i;
	int		length;
	char	temp;

	i = 0;
	length = ft_strlen(str);

	while(i <= (length-1) / 2)
	{
		temp = str[i];
		str[i] = str[length - 1 - i];
		str[length - 1 - i] = temp;
		i++;
	}
	return str;
}

int		main()
{
	char	str[] =  "salut les zouzous";
	printf("%s", ft_strrev(str));
	return (0);
}
