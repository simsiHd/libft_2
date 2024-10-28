/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsimsek <dsimsek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:47:52 by dsimsek           #+#    #+#             */
/*   Updated: 2024/10/28 17:10:45 by dsimsek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_digit(int n)
{
	int	digit;

	digit = 0;
	if (n < 0)
		digit++;
	while (n)
	{
		n /= 10;
		digit++;
	}
	return (digit);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	i = ft_digit(n);
	str = (char *) malloc(i + 1);
	if (!str)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	str[i--] = '\0';
	while (n > 0)
	{
		str[i] = n % 10 + '0';
		n /= 10;
		i--;
	}
	return (str);
}
// int main(int n)
// {
// 	int c = 200;
// 	printf("%s\n", ft_itoa(c))
// }