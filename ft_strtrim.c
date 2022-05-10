/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 12:05:31 by pbeheyt           #+#    #+#             */
/*   Updated: 2022/05/10 22:56:29 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_trim(char const *s, char c)
{
	while (*s != 0)
	{
		if (*s == c)
			return (1);
	s++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	size;
	size_t	i;
	size_t	j;
	size_t	k;

	j = ft_strlen(s1) - 1;
	i = 0;
	while (is_trim(set, s1[i]) && i < j)
		i++;
	while (is_trim(set, s1[j]) && j > 0)
		j--;
	size = ++j - i;
	str = malloc(sizeof(char) * (size + 1));
	if (str == 0)
		return (0);
	k = 0;
	while (k < size)
			str[k++] = s1[i++];
	str[k] = 0;
	return (str);
}
/*
int	main(void)
{
	char	*s1;
	char	*s2;

	s1 = "lorem ipsum dolor sit amet";
	s2 = "te";
	printf("%s", ft_strtrim(s1, s2));
	return (0);
}*/
