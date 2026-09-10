/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaza-ru <adaza-ru@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 21:25:11 by adaza-ru          #+#    #+#             */
/*   Updated: 2025/11/29 00:31:45 by adaza-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*ns;
	unsigned int	i;

	i = 0;
	while (s[i])
		i++;
	if (i > start && len > (i - start))
		len = (i - start);
	if (i <= start || i == 0)
		len = 0;
	ns = malloc(len + 1);
	if (ns == NULL)
		return (NULL);
	i = 0;
	while (i < len && s[i + start] != '\0')
	{
		ns[i] = s[i + start];
		i++;
	}
	ns[i] = '\0';
	return (ns);
}
