/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtelek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 14:53:22 by mtelek            #+#    #+#             */
/*   Updated: 2023/09/05 15:14:15 by mtelek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
int	ft_isdigit(char c)
{
	if (c > 47 && c < 58)
		return (1);
	return (0);
}
/*
int	main(void)
{
	int	input;

	input = 'B';
	printf("%d", ft_isdigit(input));
	return (0);
}
*/
