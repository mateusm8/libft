/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmagal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 20:21:22 by matmagal          #+#    #+#             */
/*   Updated: 2025/04/22 15:02:35 by matmagal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lastadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return (NULL);
	new->next = *lst;
	*lst = new;
}
