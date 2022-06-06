/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcerquei <mcerquei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 18:49:16 by mcerquei          #+#    #+#             */
/*   Updated: 2022/06/06 04:34:51 by mcerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include "./libft/libft.h"

int	ft_printf(const char *str_format, ...);
int	ft_printf_signed_int(int n);
int	ft_printf_str(char *s);
int	ft_printf_char(char c);
int	ft_printf_percent(void);
int	ft_printf_unsigned_int(unsigned int n);
int	ft_printf_lower_hex(unsigned long int n);
//int	ft_printf_lower_hex(long int n);
//int	ft_printf_lower_hex(int n);
int	ft_printf_upper_hex(unsigned long int n);
int	ft_printf_pointer(unsigned long int n);

#endif