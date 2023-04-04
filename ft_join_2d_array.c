/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_join_2d_array.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 10:05:12 by mgraefen          #+#    #+#             */
/*   Updated: 2023/04/04 10:08:55 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**join_2d_array(char **s1, char **s2)
{
	char	**out;
	int		i;
	int		j;

	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return (s2);
	if (!s2)
		return (s1);
	i = 0;
	j = 0;
	out = (char **) malloc(sizeof(char *)
			* (ft_2d_array_len(s1) + ft_2d_array_len(s2) + 1));
	if (!out)
		return (NULL);
	while (s1[j])
		out[i++] = ft_strdup(s1[j++]);
	j = 0;
	while (s2[j])
		out[i++] = ft_strdup(s2[j++]);
	out[i] = NULL;
	return (out);
}
