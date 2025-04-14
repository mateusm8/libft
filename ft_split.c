/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmagal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 18:34:41 by matmagal          #+#    #+#             */
/*   Updated: 2025/04/14 15:36:12 by matmagal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	count_str(const char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

static char	*ft_strndup(const char *str, int n)
{
	char	*ptr;

	ptr = (char *) malloc((n + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	ptr = ft_memcpy(ptr, str, n);
	ptr[n] = '\0';
	return (ptr);
}

char	**ft_split(const char *s, char c)
{
	char	**str;
	int		i;
	int		j;
	int		k;

	str = (char **) malloc((count_str(s, c) + 1) * sizeof(char *));
	if (str == NULL)
		return (NULL);
	i = 0;
	k = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		j = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > j)
		{
			str[k] = ft_strndup(&s[j], i - j);
			k++;
		}
	}
	str[k] = NULL;
	return (str);
}

/*int	main(void)
{
	char	str[] = "eu,,vou,fazer,essa,porra";
	char 		**strs = ft_split(str, ',');
	int			i;

	i = 0;
	while (strs[i])
	{
		printf("%s\n", strs[i]);
		i++;
	}
}
*/