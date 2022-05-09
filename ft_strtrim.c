/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 12:05:31 by pbeheyt           #+#    #+#             */
/*   Updated: 2022/05/04 18:04:22 by pbeheyt          ###   ########.fr       */
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

size_t	count_trim(char const *s1, char const *set)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s1[i] != 0)
	{
		if (is_trim(set, s1[i]))
			count++;
	i++;
	}
	return (count);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	size;
	size_t	count;
	size_t	i;

	count = count_trim(s1, set);
	size = ft_strlen(s1) - count;
	str = malloc(sizeof(char) * (size + 1));
	if (str == 0)
		return (0);
	i = 0;
	while (*s1 != 0)
	{
		if (is_trim(set, *s1) == 0)
			str[i++] = *s1;
	s1++;
	}
	str[i] = 0;
	return (str);
}
/*
int	main(void)
{
	char	*s1;
	char	*s2;

	s1 = "Saccclufffat";
	s2 = "ca";
	printf("%s", ft_strtrim(s1, s2));
	return (0);
}*/
