/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcagli <mcagli@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 09:43:35 by mcagli            #+#    #+#             */
/*   Updated: 2023/09/20 12:56:05 by mcagli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb > 1)
	{
		nb *= ft_recursive_factorial(nb - 1);
	}
	else if (nb == 1 || nb == 0)
		return (1);
	return (nb);
}
