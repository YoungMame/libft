/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 09:17:26 by marvin            #+#    #+#             */
/*   Updated: 2024/10/17 09:17:26 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    int     a;
    int     b;
    size_t  str_len;
    char    *str;

    if (!s)
        return (NULL);
    str_len = ft_strlen(s);
    if(start >= str_len)
    {
        str = malloc(1);
        if (str == NULL)
            return NULL;
        str[0] = '\0';
        return (str);
    }
    a = 0;
    b = start;
    str = malloc(len + 1);
    if (str == NULL)
        return (NULL);
    while (s[b] && a < (int)len)
        str[a++] = s[b++];
    str[a] = '\0';
    return (str);
}
