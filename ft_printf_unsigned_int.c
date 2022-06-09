/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_unsigned_int.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcerquei <mcerquei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 14:53:42 by mcerquei          #+#    #+#             */
/*   Updated: 2022/06/08 01:49:08 by mcerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_unsigned_int(unsigned int n)
{
	char	*s;
	int		bytes;

	s = ft_itoa_ui(n);
	bytes = ft_printf_str(s);
	free(s);
	return (bytes);
}
