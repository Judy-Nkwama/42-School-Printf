/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwama <junkwama@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 03:14:13 by junkwama          #+#    #+#             */
/*   Updated: 2023/05/30 07:38:31 by junkwama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	nbr_of_words(const char *s, char c)
{
	size_t	nbr;

	nbr = 0;
	while (*s != 0)
	{
		if (*s != c)
		{
			nbr++;
			while (*s && *s != c)
				++s;
		}
		else
			++s;
	}
	return (nbr);
}

char	**ft_split(const char *s, char c)
{
	char	**ptr;
	size_t	i;
	size_t	len;

	if (s == 0)
		return (0);
	i = 0;
	ptr = malloc(sizeof(char *) * (nbr_of_words(s, c) + 1));
	if (ptr == 0)
		return (0);
	while (*s != 0)
	{
		if (*s != c)
		{
			len = 0;
			while (*s && *s != c && ++len)
				++s;
			ptr[i++] = ft_substr(s - len, 0, len);
		}
		else
			++s;
	}
	ptr[i] = 0;
	return (ptr);
}
