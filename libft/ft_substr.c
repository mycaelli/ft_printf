/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcerquei <mcerquei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 21:55:54 by mcerquei          #+#    #+#             */
/*   Updated: 2022/04/26 20:13:23 by mcerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strlen_(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

static char	*ft_strdup_(const char *s)
{
	char	*cpy;
	int		i;
	int		j;

	i = 0;
	j = 0;
	cpy = NULL;
	while (s[i])
		i++;
	cpy = malloc(i + 1 * sizeof(char));
	if (!cpy)
		return (NULL);
	while (j <= i)
	{
		cpy[j] = s[j];
		j++;
	}
	return (cpy);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	i;
	unsigned int	s_len;
	unsigned int	sub_len;

	s_len = ft_strlen_(s);
	i = 0;
	sub = NULL;
	if (start > s_len)
		return (ft_strdup_(""));
	sub_len = ft_strlen_(&s[start]);
	if (len > sub_len)
		len = sub_len;
	sub = malloc((len + 1) * sizeof(char));
	if (!sub)
		return (NULL);
	while (i < len && s[start + i])
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
