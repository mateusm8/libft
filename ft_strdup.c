/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmagal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 13:53:17 by matmagal          #+#    #+#             */
/*   Updated: 2025/04/03 22:56:19 by matmagal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	int	i;
	char	*ptr;

	i = 0;
	ptr = (char *) malloc((ft_strlen((char *) str) + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	while (i < ft_strlen((char *) str))
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
