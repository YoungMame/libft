/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduvey <mduvey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 10:51:20 by mduvey            #+#    #+#             */
/*   Updated: 2024/10/15 16:34:37 by mduvey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

int	main()
{
	char test_char = 'c';
	int test_int = 42;
	char test_string[] = "Hello world";
	char test_string_second[] = "from 42";

	//memset
	size_t memset_arg_size = 5 * sizeof(char);
	unsigned char	*memset_arg = malloc(memset_arg_size);
	// ft_memset(memset_arg, test_char, memset_arg_size);
	// printf("ft_strlen(%s) = %d\n",test_string, ft_strlen(test_string));
	// printf("ft_isalnum(%c) = %d\n",test_char, ft_isalnum(test_char));
	// printf("ft_isdigit(%c) = %d\n",test_char, ft_isdigit(test_char));
	// printf("ft_isalpha(%c) = %d\n",test_char, ft_isalpha(test_char));
	// printf("ft_isascii(%c) = %d\n",test_char, ft_isascii(test_char));
	// printf("ft_isprint(%c) = %d\n",test_char, ft_isprint(test_char));
	// printf("value of the ptr returned by ft_memset(%c) = %s\n",test_int, memset_arg);
	// ft_bzero(memset_arg, memset_arg_size);
	// printf("value of the ptr after ft_bzero(%c) = %s\n",test_int, memset_arg);
	// ft_memcpy(memset_arg, test_string, memset_arg_size);
	// printf("value of the ptr after ft_memcpy(%s) = %s\n",test_string, memset_arg);
	// ft_memmove(memset_arg + 3, test_string_second, memset_arg_size);
	// printf("value of the ptr after ft_memmove(%s) = %s\n",test_string_second, memset_arg);
	char	*strcpy_dest = malloc(sizeof(char) * 50 + 1);
	char	strcpy_src[] = "Hello world";
	size_t	strcpy_size = sizeof(char) * 10;
	size_t	strcpy_return = ft_strlcpy(strcpy_dest, strcpy_src, strcpy_size);
	printf("ft_strlcpy(%s, %s, %zu) = %zu\n",strcpy_dest, strcpy_src, strcpy_size, strcpy_return);
	printf("value of the ptr after ft_strlcpy = %s\n", strcpy_dest);
}
