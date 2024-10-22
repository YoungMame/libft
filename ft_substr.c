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
    size_t          size;
    unsigned int    i;
    char            *result;

    i = 0;
    if (s == NULL)
        return (NULL);
    size = ft_strlen(s);
    if (size < start)
        return (ft_strdup(""));
    if (size < len)
        len = size;
    result = malloc(sizeof(char) * (size + 1));
    while (s[i] && i < len)
    {
        result[i] = s[i + start];
        i++;
    }
    result[i] = '\0';
    return (result);
}
