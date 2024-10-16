/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 22:59:42 by marvin            #+#    #+#             */
/*   Updated: 2024/10/16 22:59:42 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strdup(const char *s)
{
    char    *ptr = malloc(sizeof(char) * ft_strlen(s) + 1);

    if (ptr == NULL)
        return (NULL);
    ft_strlcpy(ptr, s, ft_strlen(s) + 1);
    return (ptr);
}