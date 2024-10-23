/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 22:27:08 by marvin            #+#    #+#             */
/*   Updated: 2024/10/16 22:27:08 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned int	s;
	char			*ptr;

	s = nmemb * size;
	ptr = malloc(s);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, s);
	return (ptr);
}
