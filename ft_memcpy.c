/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmohamma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 09:26:33 by kmohamma          #+#    #+#             */
/*   Updated: 2019/05/31 14:47:25 by kmohamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char *x;
	char *y;

	if (n == 0 || dst == src)
	{
		return (dst);
	}
	x = (char *)dst;
	y = (char *)src;
	while (--n)
	{
		*x++ = *y++;
	}
	return (dst);
}§
