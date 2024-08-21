/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcagli <mcagli@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 12:49:29 by mcagli            #+#    #+#             */
/*   Updated: 2023/09/20 13:44:15 by mcagli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_sqrt(int nb)
{
	long	i;
	long	number;

	number = nb;
	i = 1;
	if (nb > 0)
	{
		while ((i * i) <= number)
		{
			if ((i * i) == number)
				return (i);
			i++;
		}
	}
	return (0);
}
