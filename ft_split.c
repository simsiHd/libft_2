/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsimsek <dsimsek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 17:12:51 by dsimsek           #+#    #+#             */
/*   Updated: 2024/10/28 19:26:29 by dsimsek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(char *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (i == 0 || s[i -1] == c))
			count++;
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		count;
	int		count2;
	char	**str;

	count = ft_count((char *) s, c);
	str = (char **)malloc((count + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	count2 = 0;
	while (*s != '\0' && count2 < count)
	{
		while (*s == c)
			s++;
		i = 0;
		while (s[i] != '\0' && s[i] != c)
			i++;
		str[count2] = ft_substr(s, 0, i);
		s += i;
		if (!str[count2])
			return (NULL);
		count2++;
	}
	str[count2] = NULL;
	return (str);
}
