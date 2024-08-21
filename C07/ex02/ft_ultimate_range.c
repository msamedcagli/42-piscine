/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mucagli <mucagli@student.42istanbul.com.tr>+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 12:25:23 by mucagli           #+#    #+#             */
/*   Updated: 2024/07/20 12:17:34 by mucagli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	c;
	int	*d;

	i = 0;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	c = max - min;
	d = ((int *)malloc(c * sizeof(int)));
	if (d == '\0')
	{
		*range = 0;
		return (-1);
	}
	*range = d;
	while (i < c)
	{
		d[i] = min + i;
		i++;
	}
	return (c);
}
/*
#include <stdio.h>
int		main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	size;
	int	i = 0;

	min = 5;
	max = 10;
	size = max - min;
	ft_ultimate_range(&tab, min, max);
	while(i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}
}*/
