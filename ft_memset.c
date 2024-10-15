/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduvey <mduvey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 17:31:45 by mduvey            #+#    #+#             */
/*   Updated: 2024/10/15 12:10:00 by mduvey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <aio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	int	i;
	int	*s_ptr;

	i = 0;
	s_ptr = (int *)s;
	while (n--)
	{
		s_ptr[i] = c;
		i++;
	}
	return (s_ptr);
}
