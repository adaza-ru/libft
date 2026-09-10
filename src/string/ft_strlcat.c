/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaza-ru <adaza-ru@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 20:56:33 by adaza-ru          #+#    #+#             */
/*   Updated: 2025/11/28 20:57:46 by adaza-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	ld;
	unsigned int	ls;
	unsigned int	fl;

	i = 0;
	ld = (unsigned int)ft_strlen(dest);
	ls = (unsigned int)ft_strlen(src);
	if (size <= ld)
		fl = size + ls;
	else
		fl = ld + ls;
	while (src[i] && ld + 1 < size)
	{
		dest[ld] = src[i];
		i++;
		ld++;
	}
	dest[ld] = '\0';
	return (fl);
}
