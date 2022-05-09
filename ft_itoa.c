/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 11:34:40 by pbeheyt           #+#    #+#             */
/*   Updated: 2022/05/09 23:52:29 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	nb_len(int n)
{
	long	len;

	len = 0;
	if (n < 0)
	{
		n = -n;
		len++;
	}
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char			*str;
	unsigned int	i;
	long			nl;
	
	nl = n;
	i = nb_len(nl);
	str = malloc(sizeof(char) * i + 1);
	if (str == 0)
		return (0);
	str[i] = 0;
	i--;
	if (nl < 0)
	{
		str[0] = '-';
		nl = -nl;
	}
	while (nl > 0)
	{
		str[i] = (nl % 10) + 48;
		nl = nl / 10;
	i--;
	}
	return (str);
}
/*
int	main(void)
{
	//char str[] = "0";
	//printf("%d\n", nb_len(1526));
	printf("%s\n", ft_itoa(__INT_MAX__));
	return (0);
}*/