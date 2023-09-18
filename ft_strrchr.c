/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtelek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 12:57:17 by mtelek            #+#    #+#             */
/*   Updated: 2023/09/08 14:54:33 by mtelek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = ft_strlen(str);
	if (str[0] == '\0')
		return (0);
	while (i >= 0)
	{
		if (str[i] == c)
			return ((char *)str);
		i--;
	}
	return (0);
}
/*
int	main(void)
{
    const char *str = "Hi Barbie!";
    int c = 'i';
    char result = ft_strrchr(str,c) - str + 1;

    if (result != 0)
    {
        printf("Character found at index: %d\n", result);
    }
    return 0;
}
*/
