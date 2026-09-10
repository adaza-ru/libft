/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaza-ru <adaza-ru@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 21:22:53 by adaza-ru          #+#    #+#             */
/*   Updated: 2025/11/28 21:23:10 by adaza-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	compare(char const c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static size_t	start(char const *s1, char const *set)
{
	size_t	i;

	i = 0;
	while (compare(s1[i], set) == 1)
		i++;
	return (i);
}

static size_t	end(char const *s1, char const *set)
{
	size_t	i;
	size_t	e;

	i = 0;
	e = 0;
	while (s1[i])
	{
		if (compare(s1[i], set) == 0)
			e = i;
		i++;
	}
	if (e != 0)
		return (e + 1);
	else
		return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	cstart;
	size_t	cend;
	char	*ns;

	if (!s1)
		return (NULL);
	if (!set)
		return ((char *)s1);
	i = 0;
	cstart = start(s1, set);
	cend = end(s1, set);
	if (cend > cstart)
		ns = malloc(cend - cstart + 1);
	else
		ns = malloc(1);
	if (!ns)
		return (NULL);
	while (i < (cend - cstart))
	{
		ns[i] = s1[cstart + i];
		i++;
	}
	ns[i] = '\0';
	return (ns);
}
