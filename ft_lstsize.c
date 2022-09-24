/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamzaou <shamzaou@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 00:36:45 by shamzaou          #+#    #+#             */
/*   Updated: 2022/09/24 16:52:54 by shamzaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 1;
	if (!lst)
		return (0);
	if (lst->next == NULL)
		return (count);
	while (lst->next != NULL)
	{
		lst = lst->next;
		count++;
	}
	return (count);
}
