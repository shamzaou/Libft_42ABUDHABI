/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamzaou <shamzaou@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 10:45:57 by shamzaou          #+#    #+#             */
/*   Updated: 2022/09/16 08:33:17 by shamzaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*With memcpy, the destination cannot overlap the 
source at all. With memmove it can. This means that memmove 
might be very slightly slower than memcpy, as it cannot make 
the same assumptions.
For example, memcpy might always copy addresses from low to 
high. If the destination overlaps after the source, this 
means some addresses will be overwritten before copied. 
memmove would detect this and copy in the other 
direction - from high to low - in this case. 
However, checking this and switching to another 
(possibly less efficient) algorithm takes time.*/

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	unsigned char	*dest_cast;
	unsigned char	*src_cast;
	size_t			i;

	dest_cast = (unsigned char *)str1;
	src_cast = (unsigned char *)str2;
	i = 0;
	if (!str1 && !str2)
		return (0);
	if (dest_cast > src_cast)
	{
		while (i < n)
		{
			dest_cast[n - 1 - i] = src_cast[n - 1 - i];
			i++;
		}
	}
	else
	{
		ft_memcpy(str1, str2, n);
	}
	return (dest_cast);
}
