/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwama <junkwama@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 11:01:45 by junkwama          #+#    #+#             */
/*   Updated: 2023/05/30 11:57:50 by junkwama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int	i;
	unsigned char	*uc1;
	unsigned char	*uc2;

	if (n == 0)
		return (0);
	uc1 = (unsigned char *) s1;
	uc2 = (unsigned char *) s2;
	i = 0;
	while (i < n && *uc1 == *uc2)
	{
		uc1++;
		uc2++;
		i++;
	}
	if (i == n)
	{
		uc1--;
		uc2--;
	}
	return (*uc1 - *uc2);
}
