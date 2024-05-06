/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wweerasi <wweerasi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 22:01:22 by wweerasi          #+#    #+#             */
/*   Updated: 2024/05/06 23:24:04 by wweerasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int			atoi;
	int			sign;
	long int	buf;

	buf = 0;
	sign = 1;
	while ((*str >= 9 && *str <= 13) || *str == ' ' )
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str >= '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		buf = buf * 10 + (*str - 48);
		if (buf < 0 && sign == -1)
			return (0);
		else if (buf < 0 & sign == 1)
			return (-1);
		str++;
	}
	atoi = sign * buf;
	return (atoi);
}
