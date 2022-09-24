/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamzaou <shamzaou@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 10:52:33 by shamzaou          #+#    #+#             */
/*   Updated: 2022/08/22 10:52:34 by shamzaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	str_len;

	str_len = ft_strlen(str);
	while (str_len >= 0)
	{
		if (*str == (char)c)
			return ((char *)str);
		str++;
		str_len--;
	}
	return (NULL);
}
