/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaza-ru <adaza-ru@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 21:18:02 by adaza-ru          #+#    #+#             */
/*   Updated: 2025/11/28 21:18:26 by adaza-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	copy_string(char const *s, char *fsbranch, size_t i, char c)
{
	size_t	j;
	size_t	l;
	size_t	n;

	j = 0;
	l = 0;
	n = 0;
	while (s[j] != '\0' && n <= (i + 1))
	{
		while (s[j] != '\0' && s[j] == c)
			j++;
		if (s[j] != '\0' && s[j] != c)
			n++;
		while (s[j] != '\0' && s[j] != c)
		{
			if (n == (i + 1))
			{
				fsbranch[l] = s[j];
				l++;
			}
			j++;
		}
	}
	fsbranch[l] = '\0';
}

static size_t	length(char const *s, size_t i, char c)
{
	size_t	j;
	size_t	l;
	size_t	n;

	j = 0;
	l = 0;
	n = 0;
	while (s[j] != '\0' && n <= (i + 1))
	{
		while (s[j] != '\0' && s[j] == c)
			j++;
		if (s[j] != '\0' && s[j] != c)
			n++;
		while (s[j] != '\0' && s[j] != c)
		{
			if (n == (i + 1))
				l++;
			j++;
		}
	}
	return (l);
}

static size_t	how_many_strings(char const *s, char c)
{
	size_t	hms;
	size_t	j;

	hms = 0;
	j = 0;
	while (s[j] != '\0')
	{
		while (s[j] != '\0' && s[j] == c)
			j++;
		if (s[j] != '\0' && s[j] != c)
			hms++;
		while (s[j] != '\0' && s[j] != c)
			j++;
	}
	return (hms);
}

char	**ft_split(char const *s, char c)
{
	char	**fs;
	size_t	l;
	size_t	i;

	l = how_many_strings(s, c);
	fs = ft_calloc((l + 1), sizeof(char *));
	if (fs == NULL)
		return (NULL);
	fs[l] = NULL;
	i = 0;
	while (i < l)
	{
		fs[i] = ft_calloc(length(s, i, c) + 1, 1);
		if (fs[i] == NULL)
		{
			while (i > 0)
				free(fs[--i]);
			free (fs);
			return (NULL);
		}
		copy_string(s, fs[i], i, c);
		i++;
	}
	return (fs);
}
