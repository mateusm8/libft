/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmagal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 12:45:43 by matmagal          #+#    #+#             */
/*   Updated: 2025/03/24 13:33:22 by matmagal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*memchr(const void *ptr, int value, size_t num)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	val;

	i = 0;
	str = (unsigned char *)ptr;
	val = (unsigned char)value;
	if (num == 0)
		return (NULL);
	while (i < num)
	{
		if (str[i] == val)
			return (&str[i]);
		i++;
	}
	return (NULL);
}
