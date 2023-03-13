/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_divide.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 08:16:45 by mgraefen          #+#    #+#             */
/*   Updated: 2023/03/13 08:51:14 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*last_occurence(char *str, char c)
{
	char	*p;
	int		i;

	i = ft_strlen(str);
	p = str;
	while (p[i] != c)
		i--;
	return (&p[i]);
}

char	*copy_first(char *out, char *str, int len)
{
	out = (char *) malloc(sizeof(char) * (len + 1));
	if (!out)
		return (NULL);
	ft_strlcpy(out, str, len + 1);
	out[len] = '\0';
	return (out);
}

char	*copy_second(char *out, char *str, int len)
{
	out = (char *) malloc(sizeof(char) * (ft_strlen(str) - len + 1));
	if (!out)
		return (NULL);
	ft_strlcpy(out, str + len + 1, ft_strlen(str) - len);
	out[ft_strlen(str) - len - 1] = '\0';
	return (out);
}

char	*ft_str_divide(char *str, char c, int at_first, int first)
{
	char	*out;
	char	*p;
	int		len;

	len = 0;
	out = NULL;
	while (str[len] && str[len] != c)
		len++;
	if (!at_first)
	{
		p = last_occurence(str, c);
		if (p)
			len = p - str;
	}
	if (first)
		out = copy_first(out, str, len);
	else
		out = copy_second(out, str, len);
	return (out);
}
