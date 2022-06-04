/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_ptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcerquei <mcerquei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 00:21:07 by mcerquei          #+#    #+#             */
/*   Updated: 2022/06/05 01:25:56 by mcerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexitoa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcerquei <mcerquei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 19:50:05 by mcerquei          #+#    #+#             */
/*   Updated: 2022/06/05 00:19:56 by mcerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

static size_t	ft_count_digits(size_t n)
{
	unsigned long int	digits;

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

char	*ft_itoa_ptr(unsigned long int n)
{
	char	*hex_num;
	int		size;
	unsigned long int remainder;

	remainder = 0;
	size = ft_count_digits(n);
	hex_num = (char *)malloc(size + 1);
	if (!hex_num)
		return (NULL);
	hex_num[size--] = '\0';
	while (n != 0)
	{
		remainder = n % 16;
		if (remainder < 10)
			hex_num[size] = remainder + 48;
		else
			hex_num[size] = remainder + 87;
		size--;
		n /= 16;
	}
	return (hex_num);
}