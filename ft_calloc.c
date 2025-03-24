/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmagal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 13:47:22 by matmagal          #+#    #+#             */
/*   Updated: 2025/03/24 13:49:47 by matmagal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*calloc(size_t num, size_t size)
{
	void	*ptr;

	ptr = malloc(num * sizeof(size));
	if (!ptr)
		return (NULL);
	ft_bzero(ptr);
	return (ptr);
}
