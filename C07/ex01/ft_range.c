/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 12:25:10 by mulken            #+#    #+#             */
/*   Updated: 2022/08/09 12:30:26 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	*ft_range(int min, int max)
{
	int		*ptr;
	int		n;

	n = 0;
	ptr = malloc(sizeof(int *) * (max - min));
	if (max <= min || ptr == '\0')
	{
		ptr = '\0';
		return (ptr);
	}
	while (min < max)
	{
		ptr[n] = min;
		min++;
		n++;
	}
	return (ptr);
}
