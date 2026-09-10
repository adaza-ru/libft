/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaza-ru <adaza-ru@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 21:13:56 by adaza-ru          #+#    #+#             */
/*   Updated: 2025/11/28 21:14:06 by adaza-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*bps;
	unsigned char	*bpd;
	size_t			i;

	i = 0;
	if (dest == NULL && src == NULL)
		return (dest);
	bps = (unsigned char *)src;
	bpd = (unsigned char *)dest;
	if (dest < src)
	{
		while (i < n)
		{
			bpd[i] = bps[i];
			i++;
		}
	}
	else
	{
		while (n-- > 0)
			bpd[n] = bps[n];
	}
	return (dest);
}
