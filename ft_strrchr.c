/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wweerasi <wweerasi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 21:49:20 by wweerasi          #+#    #+#             */
/*   Updated: 2024/05/06 23:15:16 by wweerasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	slen;

	slen = (int) ft_strlen(s);
	s += slen;
	while (slen-- >= 0)
	{
		if (*s == (char) c)
			return ((char *) s);
		s--;
	}
	return (0);
}
