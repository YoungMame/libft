/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduvey <mduvey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 10:51:20 by mduvey            #+#    #+#             */
/*   Updated: 2024/10/15 12:04:41 by mduvey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

int	main()
{
	char test_char = '\n';
	int test_int = 42;
	char test_string[] = "Hello world";

	//memset
	size_t memset_arg_size = sizeof(int) * 5;
	int	*memset_arg = malloc(memset_arg_size);
	int *memset_return = ft_memset(memset_arg, test_int, memset_arg_size);

	printf("ft_strlen(%s) = %d\n",test_string, ft_strlen(test_string));
	printf("ft_isalnum(%c) = %d\n",test_char, ft_isalnum(test_char));
	printf("ft_isdigit(%c) = %d\n",test_char, ft_isdigit(test_char));
	printf("ft_isalpha(%c) = %d\n",test_char, ft_isalpha(test_char));
	printf("ft_isascii(%c) = %d\n",test_char, ft_isascii(test_char));
	printf("ft_isprint(%c) = %d\n",test_char, ft_isprint(test_char));
	printf("value of the ptr returned by ft_memset(%d) = %d\n",test_int, memset_return);
}
