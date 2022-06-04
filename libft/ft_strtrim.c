/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcerquei <mcerquei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 21:31:22 by mcerquei          #+#    #+#             */
/*   Updated: 2022/04/29 14:55:17 by mcerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strchr_(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
			return ((char *) s);
		s++;
	}
	return (NULL);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int		len;
	unsigned int		i;
	char				*trim;

	len = 0;
	i = 0;
	trim = NULL;
	while (*s1 && ft_strchr_(set, *s1))
		s1++;
	while (s1[len])
		len++;
	while (len && ft_strchr_(set, s1[len - 1]))
		len--;
	trim = malloc((len + 1) * sizeof(char));
	if (!trim)
		return (NULL);
	while (i < len)
	{
		trim[i] = s1[i];
		i++;
	}
	trim[i] = '\0';
	return (trim);
}
