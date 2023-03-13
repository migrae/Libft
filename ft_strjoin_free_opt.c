/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_free_opt.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 08:13:09 by mgraefen          #+#    #+#             */
/*   Updated: 2023/03/13 08:13:26 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin_free_opt(char *s1, char *s2, int free_s1, int free_s2)
{
	char	*str;
	size_t	i;
	size_t	len;
	size_t	n;

	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	str = malloc(len * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (s1 && s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	n = 0;
	while (s2 && s2[n] != '\0')
	{
		str[i] = s2[n];
		i++;
		n++;
	}
	str[len - 1] = '\0';
	if (free_s1 && s1 != NULL)
		free (s1);
	if (free_s2 && s2 != NULL)
		free (s2);
	return (str);
}