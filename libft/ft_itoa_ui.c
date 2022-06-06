/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_ui.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcerquei <mcerquei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 15:35:45 by mcerquei          #+#    #+#             */
/*   Updated: 2022/06/06 04:50:43 by mcerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

static int	ft_num_count(unsigned int n)
{
	unsigned long	count;

	count = 0;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

static char	*ft_itoa_ui_zero(void)
{
	char	*num;

	num = (char *)malloc(2 * sizeof(char));
	if (!num)
		return (NULL);
	num[0] = '0';
	num[1] = '\0';
	return (num);
}

char	*ft_itoa_ui(unsigned int n)
{
	//TRATAR ZERO
	char				*num;
	unsigned long		size;

	if (n == 0)
		return (ft_itoa_ui_zero());
	size = ft_num_count(n);
	num = (char *)malloc((size + 1) * sizeof(char));
	if (!num)
		return (NULL);
	num[size] = '\0';
	while (n != 0)
	{
		num[size - 1] = (n % 10) + '0';
		n /= 10;
		size--;
	}
	return (num);
}
