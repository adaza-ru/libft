/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaza-ru <adaza-ru@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 21:22:15 by adaza-ru          #+#    #+#             */
/*   Updated: 2025/11/28 21:22:25 by adaza-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	int				j;	
	unsigned char	x;

	x = (unsigned char)c;
	i = 0;
	j = 0;
	if (*s == '\0' && c != 0)
		return (NULL);
	while (s[i])
	{
		if (s[i] == x)
			j = i;
		i++;
	}
	if (x == '\0')
		return ((char *)&s[i]);
	if (s[j] == x)
		return ((char *)&s[j]);
	return (NULL);
}
