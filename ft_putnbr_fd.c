/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: MelanieBouteiller <MelanieBouteiller@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 19:27:05 by MelanieBout       #+#    #+#             */
/*   Updated: 2024/10/20 19:30:20 by MelanieBout      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{

	if (n < 0)
	{
		ft_putchar_fd('-');
		n = -n;
	}

	if (n >= 10)
	{
		ft_putchar()
	}
}