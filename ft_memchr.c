/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtelek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 22:32:07 by mtelek            #+#    #+#             */
/*   Updated: 2023/09/10 23:25:58 by mtelek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
//#include <stdio.h>

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (((const char *)str)[i] != '\0'))
	{
		if (((const unsigned char *)str)[i] == (unsigned char)c)
		{
			return ((void *)((char *)str + i));
			i++;
		}
		return (0);
	}
}
/*
int main() 
{
    char str[] = "Hello, World!";
    char *result;

    result = ft_memchr(str, 'a', sizeof(str));
    if (result != NULL) {
        printf("Character found at position: %ld\n", result - str);
    } else {
        printf("Character not found\n");
    }

    return 0;
}
*/
