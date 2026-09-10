/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaza-ru <adaza-ru@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 21:19:44 by adaza-ru          #+#    #+#             */
/*   Updated: 2025/11/28 21:19:56 by adaza-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ns;
	int		x;
	int		y;

	if (!s1 || !s2)
		return (NULL);
	x = 0;
	y = 0;
	while (s1[x] != '\0')
		x++;
	while (s2[y] != '\0')
		y++;
	ns = malloc(sizeof(char) * (x + y + 1));
	if (ns == NULL)
		return (NULL);
	x = -1;
	y = -1;
	while (s1[++x] != '\0')
		ns[x] = s1[x];
	while (s2[++y] != '\0')
		ns[x + y] = s2[y];
	ns[x + y] = '\0';
	return (ns);
}
