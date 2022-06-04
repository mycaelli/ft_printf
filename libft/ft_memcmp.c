/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcerquei <mcerquei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 19:15:57 by mcerquei          #+#    #+#             */
/*   Updated: 2022/04/12 20:23:31 by mcerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *a1, const void *a2, size_t size)
{
	unsigned char	*s1;
	unsigned char	*s2;

	s1 = (unsigned char *) a1;
	s2 = (unsigned char *) a2;
	while (size--)
	{
		if (*s1 != *s2)
		{
			return ((int) *s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (0);
}
