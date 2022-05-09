/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 12:05:31 by pbeheyt           #+#    #+#             */
/*   Updated: 2022/05/04 16:03:27 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	char		*dest;

	if (start >= ft_strlen(s))
	{
		dest = malloc(sizeof(char));
		dest[0] = 0;
		return (dest);
	}
	if (ft_strlen(s) < len + start)
		len = ft_strlen(s) - start;
	dest = malloc((sizeof(char) * (len + 1)));
	if (dest == 0)
		return (0);
	i = 0;
	while (s[i + start] != 0 && i < len)
	{
		dest[i] = s[i + start];
	i++;
	}
	dest[i] = 0;
	return (dest);
}
/*
int	main(void)
{
	char	*str;

	str = "ABCDEFGHIJ";
	printf("%s", ft_substr(str, 1, 4));
	return (0);
}*/
