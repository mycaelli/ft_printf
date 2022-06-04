/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcerquei <mcerquei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 17:13:36 by mcerquei          #+#    #+#             */
/*   Updated: 2022/04/29 14:33:12 by mcerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_isspace(int n)
{
	if ((n >= 9 && n <= 13) || n == 32)
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	unsigned int	i;
	long			signal;
	long			result;

	i = 0;
	signal = 1;
	result = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signal *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	return (result * signal);
}
