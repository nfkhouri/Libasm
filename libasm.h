/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libasm.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfranco- <nfranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 00:46:54 by nfranco-          #+#    #+#             */
/*   Updated: 2021/05/17 00:46:59 by nfranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBASM_H
# define LIBASM_H

# include <string.h>
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>
# include <stdlib.h>
# include <stddef.h>
# include <errno.h>
# include <sys/stat.h>

int			main(void);
size_t		ft_strlen(const char *s);
ssize_t		ft_read(int fd, void *buf, size_t count);
char		*ft_strcpy(char *dest, const char *src);
int			ft_strcmp(const char *s1, const char *s2);
ssize_t		ft_write(int fd, const void *buf, size_t count);
char		*ft_strdup(const char *s);
void		test_ft_strlen(void);
void		test_ft_strcpy(void);
void		test_ft_strcmp(void);
void		test_ft_read(void);
void		test_ft_write(void);
void		test_ft_read(void);
void		test_ft_strdup(void);

#endif
