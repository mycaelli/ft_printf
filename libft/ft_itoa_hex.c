/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_hex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcerquei <mcerquei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 19:50:05 by mcerquei          #+#    #+#             */
/*   Updated: 2022/06/06 04:42:48 by mcerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_digits(size_t n)
{
	unsigned int	digits;

	if (n == 0)
		return (1);
	digits = 0;
	while (n > 0)
	{
		digits++;
		n /= 16;
	}
	return (digits);
}

char	*ft_itoa_hex(unsigned int n)
{
	char	*hex;
	int		size;
	int		remainder;

	hex = NULL;
	remainder = 0;
	size = ft_count_digits(n);
	hex = (char *)malloc(size + 1);
	if (!hex)
		return (NULL);
	hex[size--] = '\0';
	while (n != 0)
	{
		remainder = n % 16;
		if (remainder < 10)
			hex[size] = remainder + 48;
		else
			hex[size] = remainder + 55;
		size--;
		n /= 16;
	}
	if (size == 0 && hex[1] == '\0')
		hex[0] = '0';
	return (hex);
}
