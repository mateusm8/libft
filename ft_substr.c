/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmagal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 13:30:16 by matmagal          #+#    #+#             */
/*   Updated: 2025/04/15 22:14:18 by matmagal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*str;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		str = (char *) malloc(sizeof(char));
		if (!str)
			return (NULL);
		str[0] = '\0';
		return (str);
	}
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	str = (char *) malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s + start, len + 1);
	return (str);
}

/*int main(void)
{
	char * s = ft_substr("tripouille", 0, 42000);

	printf("1 - %s\n", s);



	s = ft_substr("tripouille", 1, 1);

	printf("2 - %s\n", s);



	s = ft_substr("tripouille", 100, 1);

	printf("3 - %s\n", s);


	char * str = ft_strdup("1");
	s = ft_substr(str, 42, 42000000);

	printf("4 - %s\n", s);



	str = ft_strdup("0123456789");
	s = ft_substr(str, 9, 10);

	printf("5 - %s\n", s);


	s = ft_substr("42", 0, 0);

	printf("6 - %s\n", s);



	s = ft_substr("BONJOUR LES HARICOTS !", 8, 14);

	printf("7 - %s\n", s);



	s = ft_substr("test", 1, 2);

	printf("8 - %s\n", s);



	write(1, "\n", 1);
	return (0);
}*/
