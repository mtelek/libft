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
	int	in_word;

	count = 0;
	in_word = 0;
	while (*str)
	{
		if (*str != c)
		{
			if (!in_word)
			{
				count++;
				in_word = 1;
			}
		}
		else
		{
			in_word = 0;
		}
		str++;
	}
	return (count);
}

static char	*word_dup(const char *str, int start, int finish)
{
	int		i;
	int		len;
	char	*word;

	len = finish - start;
	word = (char *)malloc((len +1) * sizeof(char *));
	i = 0;
	if (!word)
		return (0);
	while (i < len)
	{
		word[i] = str[start + i];
		i++;
	}
	word[len] = '\0';
	return (word);
}

void	split_1(char const *s, char **split, char c)
{
	int	i;
	int	j;
	int	index;

	i = 0;
	j = 0;
	index = -1;
	while (s[i] != '\0')
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || s[i + 1] == '\0') && index >= 0)
		{
			split[j++] = word_dup(s, index, i + 1);
			index = -1;
		}
		i++;
	}
}

char	**ft_split(char const *s, char c)
{
	int		word_count;
	char	**split;

	word_count = count_words(s, c);
	split = (char **) malloc((word_count + 1) * sizeof(char *));
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
