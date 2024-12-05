/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atod.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduvey <mduvey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 22:53:42 by mduvey            #+#    #+#             */
/*   Updated: 2024/12/05 22:54:27 by mduvey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_ispace(char c)
{
	if (c == 32 || c == 9 || c == 10 || c == 11 || c == 13 || c == 12)
		return (1);
	else
		return (0);
}

static int	skip_spaces(char *nptr)
{
	int	i;

	i = 0;
	while (ft_ispace(nptr[i]))
		i++;
	return (i);
}

double	ft_atod(char *nptr)
{
	int		i;
	int		sign;
	double	number;
	double	div;

	i = skip_spaces(nptr);
	sign = 1;
	number = 0;
	div = 10;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
		number = number * 10 + (nptr[i++] - 48);
	if (nptr[i] == '.')
		i++;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		number += ((nptr[i++] - 48) / div);
		div *= 10;
	}
	return (number * sign);
}
