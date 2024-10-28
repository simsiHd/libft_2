/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsimsek <dsimsek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:57:24 by dsimsek           #+#    #+#             */
/*   Updated: 2024/10/24 14:37:56 by dsimsek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i2;

	if (s1 == NULL || set == NULL)
		return (NULL);
	if (*s1 == '\0')
		return (ft_strdup(""));
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	i2 = ft_strlen(s1);
	while (ft_strchr(set, s1[i2]))
		i2--;
	return (ft_substr(s1, 0, i2 + 1));
}
