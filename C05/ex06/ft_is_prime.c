/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekmekci <sekmekci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 09:55:18 by sekmekci          #+#    #+#             */
/*   Updated: 2023/09/19 17:37:47 by sekmekci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	index;

	index = 2;
	if (nb <= 1)
		return (0);
	while (index <= (nb / 2))
	{
		if ((nb % index) == 0)
			return (0);
		index++;
	}
	return (1);
}
