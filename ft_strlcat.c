/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduvey <mduvey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 15:39:12 by mduvey            #+#    #+#             */
/*   Updated: 2024/10/16 15:43:19 by mduvey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src,
size_t dstsize)
{
	unsigned int	i;
	unsigned int	a;

	i = 0;
	while (dst[i] && i < dstsize)
		i++;
	a = 0;
	while (src[a] && i < dstsize)
	{
		dst[i] = src[a];
		i++;
		a++;
		if (i >= dstsize)
		{
			dst[i] = '\0';
			return (i);
		}
	}
	if (dstsize)
		dst[i] = '\0';
	return (sizeof(char) * i);
}
