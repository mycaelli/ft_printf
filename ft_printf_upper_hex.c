/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_upper_hex.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcerquei <mcerquei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 20:26:09 by mcerquei          #+#    #+#             */
/*   Updated: 2022/06/04 23:32:43 by mcerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_upper_hex(unsigned long int n)
{
	char *s;
	int bytes;
	s = ft_hexitoa(n);
	bytes = ft_printf_str(s);
	free(s);
	return (bytes);
}