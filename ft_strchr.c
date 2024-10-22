/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduvey <mduvey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 16:40:47 by mduvey            #+#    #+#             */
/*   Updated: 2024/10/16 17:51:07 by mduvey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
    size_t    index;

	if (!s)
		return (0);
    index = 0;
    while (s[index])
    {
        if (s[index] == (char)c)
            return ((char *)&s[index]);
        index++;
    }
    if ((char)c == '\0')
        return ((char *)&s[index]);
    return (0);
}