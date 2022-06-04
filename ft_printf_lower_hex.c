/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_lower_hex.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcerquei <mcerquei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 20:17:56 by mcerquei          #+#    #+#             */
/*   Updated: 2022/06/04 23:31:31 by mcerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#include <stdio.h>

int	ft_printf_lower_hex(unsigned long int n)
{
	char *s;
	int bytes;
	int i;

	i = 0;
	s = ft_hexitoa(n);
	while (s[i++])
		if (ft_isuppercase(s[i]))
			s[i] = ft_tolower(s[i]);
	bytes = ft_printf_str(s);
	free(s);
	return (bytes);
}