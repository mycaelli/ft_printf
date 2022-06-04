/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexitoa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcerquei <mcerquei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 19:50:05 by mcerquei          #+#    #+#             */
/*   Updated: 2022/06/04 23:27:36 by mcerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

static size_t	ft_count_digits(size_t n, int base)
{
	unsigned int	digits;

	if (n == 0)
		return (1);
	digits = 0;
	while (n > 0)
	{
		digits++;
		n /= base;
	}
	return (digits);
}

char	*ft_hexitoa(int n)
{
	char	*hex_num;
	int		size;
	int		remainder;

	remainder = 0;
	size = ft_count_digits(n, 16);
	//printf("size %d\n", size);
	hex_num = (char *)malloc(size + 1);
	if (!hex_num)
		return (NULL);
	hex_num[size--] = '\0';
	//printf("n antes da divisão: %d\n", n);
	while (n != 0)
	{
		remainder = n % 16;
		if (remainder < 10)
			hex_num[size] = remainder + 48;
		else
			hex_num[size] = remainder + 55;
		size--;
		n /= 16;
	}
	return (hex_num);
}