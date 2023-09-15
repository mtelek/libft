/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtelek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 22:28:23 by mtelek            #+#    #+#             */
/*   Updated: 2023/09/11 23:09:01 by mtelek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0' && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (i);
}
/*
int main(void) 
{
    char src[] = "Hello, world!";
    char dst[20];

    ft_strlcpy(dst, src, sizeof(dst));

    printf("Copied string: %s\n", dst);

    return 0;
}
*/
