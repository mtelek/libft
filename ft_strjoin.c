/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtelek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 09:00:55 by mtelek            #+#    #+#             */
/*   Updated: 2023/09/16 09:59:59 by mtelek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*new_string;

	i = 0;
	j = 0;
	new_string = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!new_string)
		return (0);
	ft_memcpy(new_string, s1, ft_strlen(s1));
	while (s2[i] != '\0')
	{
		new_string[ft_strlen(new_string) + j] = s2[i];
		i++;
	}
	return (new_string);
}
/*
int main(void)
{
    char *s1 = "Hello, ";
    char *s2 = "world!";
    char *result = ft_strjoin(s1, s2);
    if (result)
    {
        printf("Concatenated string: %s\n", result);
        free(result);
    }
    else
    {
        printf("Memory allocation failed.\n");
    }
    return 0;
}
*/
