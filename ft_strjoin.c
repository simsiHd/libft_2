/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsimsek <dsimsek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:31:00 by dsimsek           #+#    #+#             */
/*   Updated: 2024/10/24 13:56:26 by dsimsek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	i1;
	size_t	i2;
	size_t	str1;

	if (!s1 || !s2)
		return (NULL);
	str = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!str)
		return (NULL);
	i1 = 0;
	i2 = 0;
	str1 = 0;
	while (s1[i1] != '\0')
		str[str1++] = s1[i1++];
	while (s2[i2] != '\0')
		str[str1++] = s2[i2++];
	str[i1 + i2] = '\0';
	return (str);
}
