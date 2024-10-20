/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 23:27:00 by marvin            #+#    #+#             */
/*   Updated: 2024/10/20 23:27:00 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
    size_t  a;
    size_t  b;

    a = 0;
    if (s2[0] == '\0')
        return ((char *)&s1[0]);
    while (a < n && s1[a] != '\0')
    {
        b = 0;
        while (s1[a + b] == s2[b] && (a + b) < n)
        {
            if (s2[b + 1] == '\0')
                return((char *)&s1[a]);
            b++;
        }
        a++;
    }
    return (NULL);
}