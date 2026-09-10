/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaza-ru <adaza-ru@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 21:13:03 by adaza-ru          #+#    #+#             */
/*   Updated: 2025/11/28 21:13:16 by adaza-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*bps;
	unsigned char	*bpd;

	if (dest == NULL && src == NULL)
		return (dest);
	i = 0;
	bps = (unsigned char *)src;
	bpd = (unsigned char *)dest;
	while (i < n)
	{
		bpd[i] = bps[i];
		i++;
	}
	return (bpd);
}
