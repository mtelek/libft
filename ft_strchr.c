/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtelek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 23:03:23 by mtelek            #+#    #+#             */
/*   Updated: 2023/09/07 23:53:36 by mtelek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	if (str[i] == 0)
		return (0);
	while (str[i] != '\0' && c != str[i])
	{
		if (str[i] == c)
			return ((char *)str);
		i++;
	}
	return (0);
}
/*
int main()
{
    const char *str = "Hi Barbie!";
    int c = 'i';
    char result = ft_strchr(str,c) - str + 1;

    if (result != 0)
    {
        printf("Character found at index: %d\n", result);
    }
    return 0;
}
*/