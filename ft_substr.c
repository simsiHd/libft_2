/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsimsek <dsimsek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 10:48:06 by dsimsek           #+#    #+#             */
/*   Updated: 2024/10/24 13:28:43 by dsimsek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	c;

	i = ft_strlen(s);
	if (s == NULL)
		return (NULL);
	if (i < start || len == 0)
		return (ft_strdup (""));
	if (len >= i - start)
		len = i - start;
	str = (char *)malloc(len + 1);
	if (str == NULL)
		return (NULL);
	c = 0;
	while (s[start + c] != '\0' && len > c)
	{
		str[c] = s[start + c];
		c++;
	}
	str[c] = '\0';
	return (str);
}
