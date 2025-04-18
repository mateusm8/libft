/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmagal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 13:44:37 by matmagal          #+#    #+#             */
/*   Updated: 2025/04/03 22:57:12 by matmagal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_cat2(char *str, const char *s1, const char *s2)
{
	int	i;
	int	j;

	i = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	str[i] = '\0';
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		len1;
	int		len2;

	if (!s1 && !s2)
	{
		str = (char *) malloc(sizeof(char));
		if (!str)
			return (NULL);
		str[0] = '\0';
		return (str);
	}
	if (!s1)
		len1 = 0;
	else
		len1 = ft_strlen((char *)s1);
	if (!s2)
		len2 = 0;
	else
		len2 = ft_strlen((char *) s2);
	str = (char *) malloc((len1 + len2 + 1) * sizeof(char));
	if (!str)
		return (NULL);
	ft_cat2(str, s1, s2);
	return (str);
}
