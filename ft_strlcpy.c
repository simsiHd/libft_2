/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsimsek <dsimsek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 14:59:35 by dsimsek           #+#    #+#             */
/*   Updated: 2024/10/13 15:27:00 by dsimsek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	s;

	s = ft_strlen(src);
	if (dst == NULL || src == NULL)
		return (0);
	i = 0;
	if (dstsize == 0)
		return (s);
	while (i < dstsize -1 && i < s)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (s);
}
