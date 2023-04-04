/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_2d_array_len.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 10:08:01 by mgraefen          #+#    #+#             */
/*   Updated: 2023/04/04 10:08:28 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_2d_array_len(char **array)
{
	int	i;

	i = 0;
	while (array[i])
		i++;
	return (i);
}