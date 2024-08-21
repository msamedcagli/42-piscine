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

char	*ft_strdup(char *src)
{
	char	*sonuc;
	int		i;

	i = 0;
	sonuc = malloc(sizeof(*src));
	if (sonuc == 0)
		return (0);
	while (src[i] != '\0')
	{
		sonuc[i] = src[i];
		i++;
	}
	sonuc[i] = '\0';
	return (sonuc);
}
