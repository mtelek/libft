/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtelek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 21:38:12 by mtelek            #+#    #+#             */
/*   Updated: 2023/09/10 22:00:14 by mtelek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
//#include <stdio.h>

int	strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (*str1 != '\0' || *str2 != '\0'))
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	*str1 = "Hello";
	char	*str2 = "Hell";
	size_t	n = 4;

	printf("%d", strncmp(str1, str2, n));
	return (0);
}
*/
