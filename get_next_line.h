/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 15:20:52 by mgraefen          #+#    #+#             */
/*   Updated: 2023/01/09 13:06:20 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

char	*get_next_line(int fd);
void	*ft_gnl_calloc(size_t count, size_t size);
size_t	ft_len_to_line_end(char *str, int line_break);
size_t	ft_gnl_strlcpy(char *dst, char *src, size_t dstsize);
char	*ft_gnl_strdup(char *s1);
char	*ft_gnl_strjoin(char *s1, char *s2);
char	*ft_gnl_strchr(const char *s, int c);

#endif