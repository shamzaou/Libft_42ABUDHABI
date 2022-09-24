/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamzaou <shamzaou@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 10:53:05 by shamzaou          #+#    #+#             */
/*   Updated: 2022/08/24 12:47:46 by shamzaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	str_len;

	str_len = ft_strlen(str);
	while (str_len >= 0)
	{
		if (str[str_len] == (char)c)
			return ((char *)(str + str_len));
		str_len--;
	}
	return (0);
}
