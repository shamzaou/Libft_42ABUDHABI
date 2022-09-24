/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamzaou <shamzaou@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 10:53:33 by shamzaou          #+#    #+#             */
/*   Updated: 2022/09/16 09:49:55 by shamzaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start > s_len || len <= 0)
		return (ft_strdup(""));
	if ((start + len) > s_len)
	{
		str = (char *)ft_calloc(s_len - start + 1, sizeof(char));
		if (str == NULL)
			return (NULL);
		ft_strlcpy(str, s + start, s_len - start + 1);
		return (str);
	}
	str = (char *)ft_calloc(len + 1, sizeof(char));
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, s + start, len + 1);
	return (str);
}
