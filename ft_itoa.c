/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduvey <mduvey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 15:50:13 by mduvey            #+#    #+#             */
/*   Updated: 2024/10/17 16:57:03 by mduvey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

static int	ft_sqrt_ten(int	pow)
{
	int	result;

	result = 1;
	while (pow > 1)
	{
		result *= 10;
		pow--;
	}
	return (result);
}

static int	ft_get_digits_count(int n)
{
	int	multiplicator;
	int	result;

	multiplicator = 10;
	result = 1;
	if (!n)
		return (0);
	while (n / multiplicator > 0) 
	{
		multiplicator *= 10;
		result += 1;
	}
	return (result);
}

char	*ft_itoa(int n)
{
	int		digits_count;
	int		multiplicator;
	char	*str;
	int		i;

	digits_count = ft_get_digits_count(n);
	multiplicator = ft_sqrt_ten(digits_count);
	str = malloc(sizeof(char) * (digits_count + 1));
	i = 0;
	while (i < digits_count)
	{
		str[i] = (n / multiplicator) + '0';
		n = n % multiplicator;
		multiplicator /= 10;
		i++;
	}
	str[i] = '\0';
	return (str);
}
