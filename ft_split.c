/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmagal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 18:34:41 by matmagal          #+#    #+#             */
/*   Updated: 2025/04/13 19:25:28 by matmagal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

char	**ft_split(const char *s, char c)
{
	char	**str;
	int		i;
	int		j;
	
	i = count_str(s, c);
	str == (char **) malloc((i + 1) * sizeof(char *));
	if (str == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		while 
	}
}