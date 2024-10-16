/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduvey <mduvey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 16:40:47 by mduvey            #+#    #+#             */
/*   Updated: 2024/10/16 18:19:42 by mduvey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	void		*ptr;

	ptr = (void *)s;
	i = 0;
	while (i < n)
	{
		if (*ptr == c)
			return (ptr);
		ptr++;
		i++;
	}
	ptr = 0;
	return (ptr);
}
