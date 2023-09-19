/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtelek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 23:48:42 by mtelek            #+#    #+#             */
/*   Updated: 2023/09/18 18:15:05 by mtelek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *str, char c)
{
	int	count;

	count = 0;
	while (*str)
	{
		while (*str == c)
			str++;
		if (*str)
		{
			count++;
			while (*str && *str != c)
				str++;
		}
	}
	return (count);
}

void	split_1(char const *s, char **split, char c)
{
	int	i;
	int	j;
	int	start;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			start = i;
			while (s[i] && s[i] != c)
				i++;
			split[j++] = ft_substr(s, start, i - start);
		}
	}
}

char	**ft_split(char const *s, char c)
{
	int		word_count;
	char	**split;

	word_count = count_words(s, c);
	split = (char **)malloc((word_count + 1) * sizeof(char *));
	if (!split)
		return (0);
	split_1(s, split, c);
	split[word_count] = NULL;
	return (split);
}
/*
int	main(void) 
{
    const char *input_string = "This is a test string";
    char **result = ft_split(input_string, ' ');
	int i;

	i = 0;
    if (!result) {
        printf("Memory allocation error.\n");
        return 1;
    }
    while (result[i] != NULL) 
	{
        printf("%s\n", result[i]);
        free(result[i]);
		i++;
    }

    free(result);

    return 0;
}
*/
