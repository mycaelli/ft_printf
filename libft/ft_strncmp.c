/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcerquei <mcerquei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 22:48:02 by mcerquei          #+#    #+#             */
/*   Updated: 2022/04/29 14:20:01 by mcerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *a1, const char *a2, size_t size)
{
	const unsigned char	*s1;
	const unsigned char	*s2;

	s1 = (unsigned char *) a1;
	s2 = (unsigned char *) a2;
	while (size-- && (*s1 || *s2))
	{
		if (*s1 != *s2)
			return ((int) *s1 - *s2);
		s1++;
		s2++;
	}
	return (0);
}
