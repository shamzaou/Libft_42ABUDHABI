/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamzaou <shamzaou@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 10:13:45 by shamzaou          #+#    #+#             */
/*   Updated: 2022/09/16 08:32:06 by shamzaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*dest_cast;
	unsigned char	*src_cast;
	size_t			index;

	if (!dest && !src)
		return (NULL);
	dest_cast = (unsigned char *)dest;
	src_cast = (unsigned char *)src;
	index = 0;
	while (index < n)
	{
		dest_cast[index] = src_cast[index];
		index++;
	}
	return (dest);
}
