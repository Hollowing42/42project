/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boliver <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 09:12:40 by boliver           #+#    #+#             */
/*   Updated: 2022/03/02 16:49:15 by bocal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*ptr;
	int		i;
    printf("boo");
	ptr = (char *)s;
	i = 1;
	while (*(ptr + i))
	{
		if (*(ptr + i) == c)
			return (ptr + i);
		i++;
	}
	if (c == '\0')
		return (ptr + i);
	return (0);
}
