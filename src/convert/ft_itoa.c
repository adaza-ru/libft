/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaza-ru <adaza-ru@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 21:07:02 by adaza-ru          #+#    #+#             */
/*   Updated: 2025/11/28 21:07:14 by adaza-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	count(long x)
{
	long	i;

	i = 0;
	if (x < 0)
	{
		i++;
		x = -x;
	}
	while (x > 0)
	{
		x = (x / 10);
		i++;
	}
	return (i);
}

static char	*zero(void)
{
	char	*ns;

	ns = malloc(2);
	if (!ns)
		return (NULL);
	ns[0] = '0';
	ns[1] = '\0';
	return (ns);
}

char	*ft_itoa(int n)
{
	char	*s;
	int		c;
	long	num;

	if (n == 0)
		return (zero());
	num = n;
	c = count(num);
	s = malloc(c + 1);
	if (s == NULL)
		return (NULL);
	if (num < 0)
	{
		s[0] = '-';
		num = -num;
	}
	s[c] = '\0';
	while (num > 0)
	{
		s[--c] = (num % 10) + '0';
		num = num / 10;
	}
	return (s);
}
