/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtelek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 18:39:52 by mtelek            #+#    #+#             */
/*   Updated: 2023/09/16 19:50:48 by mtelek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	i = 0;
	str = (char *)malloc(sizeof(char));
	if (!s || !f || !(str = ft_strdup(s)))
		return (0);
	while (str[i])
	{
		str[i] = f(i, str[i]);
		i++;
	}
	return (str);
}
/*
char    uppercase_conversion(unsigned int index, char c)
{
    return toupper(c);
}

int main(void)
{
    char *str = "hello world";
    char *result = ft_strmapi(str, uppercase_conversion);
    printf("Original string: %s\n", str);
    printf("Uppercase string: %s\n", result);
    free(result);
    return 0;
}
*/
