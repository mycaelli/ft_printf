/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_upper_hex.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcerquei <mcerquei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 20:26:09 by mcerquei          #+#    #+#             */
/*   Updated: 2022/06/05 01:38:18 by mcerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_upper_hex(unsigned long int n)
{
	char	*s;
	int		bytes;

	s = NULL;
	s = ft_itoa_hex(n);
	bytes = ft_printf_str(s);
	free(s);
	return (bytes);
}
