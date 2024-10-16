/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduvey <mduvey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 16:40:47 by mduvey            #+#    #+#             */
/*   Updated: 2024/10/16 17:02:35 by mduvey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;
	char	*value;

	value = 0;
	ptr = (char *)s;
	while (*ptr)
	{
		if (*ptr == c)
			value = ptr;
		ptr++;
	}
	if (value)
		return (value);
	if (c == '\0')
		return (ptr);
	ptr = 0;
	return (ptr);
}
