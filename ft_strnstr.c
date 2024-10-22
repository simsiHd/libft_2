/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsimsek <dsimsek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 14:14:57 by dsimsek           #+#    #+#             */
/*   Updated: 2024/10/22 15:41:59 by dsimsek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	i = ft_strlen(needle);
	if (i == 0)
		return ((char *) haystack);
	if (len == 0)
		return (NULL);
	while (*haystack && len > 0)
	{
		if (!ft_strncmp(haystack, needle, i) && len >= i)
		{
			return ((char *) haystack);
		}
		else
		{
			haystack++;
			len--;
		}
	}
	return (NULL);
}
