/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmagal <matmagal@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 22:21:57 by matmagal          #+#    #+#             */
/*   Updated: 2025/05/04 17:15:18 by matmagal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen((char *)s) - 1;
	if (c == '\0')
		return ((char *)&s[i + 1]);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}

/*int	main(void)
{
	char	str[] = "Hello World";
	char	c;

	c = 'W';
	if (ft_strrchr(str, c))
		printf("%s\n", ft_strrchr(str, c));
	return (0);
}*/