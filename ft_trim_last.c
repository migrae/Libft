/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trim_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 08:26:35 by mgraefen          #+#    #+#             */
/*   Updated: 2023/03/07 08:27:02 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_trim_last(char *str, char c)
{
	int		i;
	char	*new;

	i = ft_strlen(str);
	while(str[i] != c)
		i--;
	new = ft_calloc(sizeof(char), i + 1);
	if(!new)
		return(NULL);
	ft_strlcpy(new, str, i + 1);
	return(new);
}