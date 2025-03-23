/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmagal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 19:40:28 by matmagal          #+#    #+#             */
/*   Updated: 2025/03/23 19:50:08 by matmagal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memset(void *ptr, int value, size_t num)
{
	size_t	i;

	i = 0;
	if (num == 0)
		return (ptr);
	while (i < num)
	{
		((unsigned char *)ptr)[i] = (unsigned char)value;
		i++;
	}
	return (ptr);
}
