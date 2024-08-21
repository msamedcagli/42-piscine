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

char	*ft_strjoin(int size, char **strs, char *sep)
{	
	char	*sonuc;
	int		i;
	int		x;
	int		c;

	sonuc = malloc(sizeof(strs));
	i = 0;
	c = 0;
	while (i < size)
	{
		x = 0;
		while (strs[i][x] != '\0')
		{
			sonuc[c++] = strs[i][x++];
		}
		x = 0;
		while (sep[x] != '\0' && i != size - 1)
		{
			sonuc[c++] = sep[x++];
		}
		i++;
	}
	sonuc[c] = '\0';
	return (sonuc);
}
