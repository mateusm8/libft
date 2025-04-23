/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmagal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 23:40:38 by matmagal          #+#    #+#             */
/*   Updated: 2025/04/23 18:41:04 by matmagal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	nb;
	int	signal;

	i = 0;
	nb = 0;
	signal = 1;
	while (str[i] < 33)
		i++;
	if (str[i] == '-')
	{
		signal *= -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= 48 && str[i] <= 57)
	{
		nb = (nb * 10) + (str[i]) - 48;
		i++;
	}
	return (nb * signal);
}

/*int	main(void)
{
	char 	str[] = "-591559cggrw94";
	
	printf("%d\n", ft_atoi(str));
}*/
