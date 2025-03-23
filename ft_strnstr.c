/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmagal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 19:18:02 by matmagal          #+#    #+#             */
/*   Updated: 2025/03/23 19:35:50 by matmagal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (len < ft_strlen(needle) || !haystack || !needle)
		return (NULL);
	if (needle[0] == '\0')
		return ((char *)haystack);	
	while (haystack[i] && i < len)
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			while (i + j < len && needle[j] && haystack[i + j] == needle[j])
			{
				j++;
				if (needle[j] == '\0')
					return ((char *)&haystack[i]);
			}
		}
		i++;
	}
	return (NULL);
}
