/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamzaou <shamzaou@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 10:51:07 by shamzaou          #+#    #+#             */
/*   Updated: 2022/09/16 09:14:44 by shamzaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_i;
	size_t	src_i;

	if (dstsize == 0)
		return (0);
	dst_i = 0;
	src_i = 0;
	while (dst[dst_i] && dst_i < dstsize)
		dst_i++;
	while (src[src_i] && (dst_i + src_i +1) < dstsize)
	{
		dst[dst_i + src_i] = src[src_i];
		src_i++;
	}
	if (dst_i != dstsize)
		dst[dst_i + src_i] = '\0';
	return (dst_i + ft_strlen(src));
}
