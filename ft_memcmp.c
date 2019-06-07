/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmohamma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 13:44:59 by kmohamma          #+#    #+#             */
/*   Updated: 2019/06/07 16:28:29 by kmohamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned const char		*t1;
	unsigned const char		*t2;
	size_t					c;

	c = 0;
	t1 = (unsigned const char *)s1;
	t2 = (unsigned const char *)s2;
	if (t1 == NULL || t2 == NULL)
		return ('\0');
	while (c < n)
	{
		if (t1[c] != t2[c])
			return (t1[c] - t2[c]);
		//t1++;
		//t2++;
		//n--;
		c++;
	}
	return ('\0');
}
