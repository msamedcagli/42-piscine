/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcagli <mcagli@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 09:44:24 by mcagli            #+#    #+#             */
/*   Updated: 2023/09/18 09:44:27 by mcagli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	res;

	res = nb;
	while (power > 1)
	{
		return (nb * ft_recursive_power(nb, (power - 1)));
	}
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (res);
}
