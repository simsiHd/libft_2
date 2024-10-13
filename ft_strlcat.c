/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsimsek <dsimsek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 15:29:02 by dsimsek           #+#    #+#             */
/*   Updated: 2024/10/13 17:01:04 by dsimsek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	d;
	size_t	s;

	if (dst == NULL && src == NULL)
		return (0);
	d = ft_strlen(dst);
	s = ft_strlen(src);
	if (d >= dstsize)
		return (dstsize + ft_strlen(src));
	dstsize = dstsize - d;
	dst += d;
	while (*src && dstsize > 1)
	{
		*dst++ = *src++;
		dstsize--;
	}
	*dst = '\0';
	return (d + s);
}
