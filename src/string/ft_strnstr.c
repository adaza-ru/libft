/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaza-ru <adaza-ru@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 21:21:58 by adaza-ru          #+#    #+#             */
/*   Updated: 2025/11/28 21:22:10 by adaza-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*ptl;
	char	*ptb;
	size_t	i;
	size_t	j;

	ptl = (char *)little;
	ptb = (char *)big;
	i = 0;
	j = 0;
	if (ptl[0] == '\0')
		return (ptb);
	if (ptb[0] == '\0' || len == 0)
		return (NULL);
	while (ptb[i] != '\0' && i < len)
	{
		j = 0;
		while (ptl[j] == ptb[i + j] && (i + j) < len && ptl[j] != '\0')
		{
			j++;
			if (ptl[j] == '\0')
				return (&ptb[i]);
		}
		i++;
	}
	return (NULL);
}
