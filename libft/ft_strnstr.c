/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcerquei <mcerquei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 01:03:21 by mcerquei          #+#    #+#             */
/*   Updated: 2022/04/29 14:50:54 by mcerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strncmp_(const char *a1, const char *a2, size_t size)
{
	const unsigned char	*s1;
	const unsigned char	*s2;

	s1 = (unsigned char *) a1;
	s2 = (unsigned char *) a2;
	while (size-- && *s1 && *s2)
	{
		if (*s1 != *s2)
			return ((int) *s1 - *s2);
		s1++;
		s2++;
	}
	return (0);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	l_len;

	l_len = 0;
	if (!big)
		return (0);
	if (!little[0])
		return ((char *) big);
	while (little[l_len])
		l_len++;
	while (l_len <= len && *big)
	{
		if (ft_strncmp_(big, little, len) == 0)
			return ((char *) big);
		big++;
		len--;
	}
	return (NULL);
}
