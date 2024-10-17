/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 09:56:36 by marvin            #+#    #+#             */
/*   Updated: 2024/10/17 09:56:36 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char 	*ft_strjoin(char const *s1, char const *s2)
{
    int     a;
    int     b;
    char    *str;

    a = 0;
    b = 0;
    str = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
    if (str == NULL)
        return (NULL);
    while (s1[a])
    {
        str[a] = s1[a];
        a++;
    }
    while (s2[b])
    {
        str[a] = s2[b];
        a++;
        b++;
    }
    str[a] = '\0';
    return (str);
}
