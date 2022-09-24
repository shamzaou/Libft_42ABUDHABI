/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamzaou <shamzaou@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 14:53:36 by shamzaou          #+#    #+#             */
/*   Updated: 2022/08/24 11:36:58 by shamzaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*string;
	size_t	src_size;

	src_size = ft_strlen(src);
	string = malloc(sizeof(char) * (src_size + 1));
	if (string == NULL)
		return (NULL);
	ft_strlcpy(string, src, src_size + 1);
	return (string);
}
