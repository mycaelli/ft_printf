/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_pointer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcerquei <mcerquei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 00:00:36 by mcerquei          #+#    #+#             */
/*   Updated: 2022/06/05 01:26:18 by mcerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_pointer(unsigned long int n)
{
	char *s;
	int bytes;
	
	if (n == 0)
		return (write(1, "(nil)", 5));
	bytes = write(1, "0x", 2);
	s = ft_itoa_ptr(n);
	bytes += ft_printf_str(s);
	free(s);
	return (bytes);
}