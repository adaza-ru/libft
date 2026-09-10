/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaza-ru <adaza-ru@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 21:04:14 by adaza-ru          #+#    #+#             */
/*   Updated: 2025/11/28 21:04:20 by adaza-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*nm;
	size_t	i;

	nm = malloc(nmemb * size);
	if (nm == NULL)
		return (NULL);
	i = 0;
	while (i < (nmemb * size))
	{
		nm[i] = '\0';
		i++;
	}
	return ((void *)nm);
}
