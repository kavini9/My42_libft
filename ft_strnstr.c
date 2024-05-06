/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wweerasi <wweerasi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 19:32:39 by wweerasi          #+#    #+#             */
/*   Updated: 2024/05/06 23:33:11 by wweerasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int			len_ndl;
	const char	*occ;

	if (*needle == '\0' )
		return ((char *) haystack);
	while (*haystack != '\0' && (int) len--)
	{
		len_ndl = (int) len + 1;
		occ = haystack;
		while (*needle != '\0' && *occ == *needle && len_ndl--)
		{
			occ++;
			needle++;
		}
		if (*needle == '\0')
			return ((char *) haystack);
		needle -= (occ - haystack++);
	}
	return (0);
}
