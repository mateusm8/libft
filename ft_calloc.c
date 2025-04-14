/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmagal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 13:47:22 by matmagal          #+#    #+#             */
/*   Updated: 2025/04/14 16:12:29 by matmagal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*ptr;

	if (size != 0 && num > (size_t) - 1 / size)
		return (NULL);
	ptr = malloc(num * size);
	if (!ptr)
		return (0);
	ft_bzero(ptr, num * size);
	return (ptr);
}
