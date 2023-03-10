/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_duplicate_2d.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 11:30:39 by mgraefen          #+#    #+#             */
/*   Updated: 2023/03/10 10:52:21 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_dupclicate_2d(char **str)
{
	int		i;
	int		size;
	char	**copy;

	size = 0;
	i = 0;
	if (!str || !*str)
		return (NULL);
	while (str[size])
		size++;
	copy = (char **) malloc(sizeof(char *) * (size + 1));
	if (!copy)
		return (NULL);
	while (str[i])
	{
		copy [i] = ft_strdup(str[i]);
		if (!copy[i])
			return (NULL);
		i++;
	}
	copy[i] = NULL;
	return (copy);
}
