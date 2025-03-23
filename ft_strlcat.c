/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmagal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 18:48:16 by matmagal          #+#    #+#             */
/*   Updated: 2025/03/23 19:07:48 by matmagal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
{
	size_t	i;
	size_t	lendst;
	size_t	lensrc;

	i = 0;
	lendst = ft_strlen(dst);
	lensrc = ft_strlen(src);
	if (dstsize <= lendst)
		return (dstsize + lensrc);
	while (src[i] && (lendst + i < dstsize - 1))
	{
		dst[lendst + i] = src[i];
		i++; 
	}
	dst[lendst + i] = '\0';
	return (lendst + lensrc);
}
