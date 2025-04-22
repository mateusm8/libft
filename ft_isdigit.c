/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmagal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 21:22:22 by matmagal          #+#    #+#             */
/*   Updated: 2025/04/22 15:39:20 by matmagal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

/*int	main(void)
{
	int		i;
	char	str[] = "teste string1";

	i = 0;
	while (str[i])
	{
		if (ft_isdigit(str[i]))
			printf("O caracter %d no indice %i e digit \n", str[i], i);
		if (!ft_isdigit(str[i]))
			printf("O caracter %d no indice %i nao e digit \n", str[i], i);
		i++;
	}
}*/