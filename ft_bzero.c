/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmagal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 19:53:34 by matmagal          #+#    #+#             */
/*   Updated: 2025/04/22 17:27:10 by matmagal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *ptr, size_t num)
{
	size_t	i;

	i = 0;
	if (num == 0)
		return ;
	while (i < num)
	{
		((unsigned char *)ptr)[i] = 0;
		i++;
	}
}

/*int	main(void)
{
	char	str[] = "Hello World";
	
	ft_bzero(str, 5);
	printf("%s\n", str);
}*/
