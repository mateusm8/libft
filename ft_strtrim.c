/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmagal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 21:37:30 by matmagal          #+#    #+#             */
/*   Updated: 2025/04/10 22:38:25 by matmagal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check_set(char c, char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
	
}

int	size_trimmed(char const *s1, char const *set)
{
	int	i;
	int	j;

	i = 0;
	j = ft_strlen((char *) s1);
	while (s1[i] && check_set(s1[i], set))
		i++;
	while (s1[j] > 0 && check_set(s1[j], set))
		j--;
	return (j - i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*trim;
	
	i = 0;
	while (s1[i] && check_set(s1[i], set))
		i++;
	trim = (char *) malloc((size_trimmed(s1, set) + 1) * sizeof(char *));
	if (trim == NULL)
		return (NULL);
	j = 0;
	while (j < size_trimmed(s1, set))
	{
		trim[j] = ((char *)s1)[i];
		i++;
		j++;
	}
	trim[j] = '\0';
	return (trim);
}