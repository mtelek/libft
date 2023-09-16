/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtelek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 13:44:03 by mtelek            #+#    #+#             */
/*   Updated: 2023/09/16 18:38:23 by mtelek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_numlen(int n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		len++;
		n *= -1;
	}
	while (n >= 10)
	{
		len++;
		n /= 10;
	}
	return (len + 1);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		num;

	len = ft_numlen(n);
	str = (char *)malloc(len +1);
	if (str == 0)
		return (0);
	str[len] = '\0';
	if (n < 0)
		num = -n;
	else
		num = n;
	while (len > 0)
	{
		str[len - 1] = (num % 10) + 48;
		num /= 10;
		len--;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}

int	main(void)
{
	int		num;
	char	*str;

	num = -799;
	str = ft_itoa(num);
	printf("Number: %d\n", num);
	printf("String representation: %s\n", str);
	free(str);
	return (0);
}
