/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtelek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 10:01:09 by mtelek            #+#    #+#             */
/*   Updated: 2023/09/16 13:22:55 by mtelek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		count;
	char	*new_string;

	i = 0;
	j = 0;
	count = 0;
	new_string = (char *)malloc(ft_strlen(s1) - count + 1);
	if (!new_string || !s1 || !set)
		return (0);
	while (s1[i] != '\0')
	{
		if (s1[i] == *set)
			count++;
		if (s1[i] != *set)
		{
			new_string[j] = s1[i];
			j++;
		}
		i++;
	}
	new_string[j] = '\0';
	return (new_string);
}
/*
int main()
{
    char *s1 = "!!!!!Hello, World!!!!!";
    char *set = "!";

    char *trimmed_str = ft_strtrim(s1, set);
    printf("Original string: '%s'\n", s1);
    printf("Trimmed string: '%s'\n", trimmed_str);

    free(trimmed_str);

    return 0;
}
*/
