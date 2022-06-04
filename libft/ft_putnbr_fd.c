/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcerquei <mcerquei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 04:43:49 by mcerquei          #+#    #+#             */
/*   Updated: 2022/04/23 04:51:10 by mcerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check(int n, int fd)
{
	if (n == -2147483648)
	{
		write(fd, "-2", 2);
		return (147483648);
	}
	else if (n < 0)
	{
		write(fd, "-", 1);
		return (n * (-1));
	}
	else
		return (n);
	return (0);
}

void	ft_putnbr_fd(int n, int fd)
{
	char	conv;

	conv = 0;
	n = check(n, fd);
	if (n < 10)
	{
		conv = n + '0';
		write(fd, &conv, 1);
	}
	else
	{
		ft_putnbr_fd(n / 10, fd);
		conv = ((n % 10) + '0');
		write(fd, &conv, 1);
	}
}
