/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsimsek <dsimsek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 17:46:49 by dsimsek           #+#    #+#             */
/*   Updated: 2024/10/13 18:34:29 by dsimsek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	if ((char) c == '\0')
		return ((char *) s + i);
	while (i > 0)
	{
		if (s[i - 1] == (char) c)
			return ((char *) s + i - 1);
		i--;
	}
	return (NULL);
}
