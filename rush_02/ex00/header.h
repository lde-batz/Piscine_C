/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   headers.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-batz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 20:08:35 by lde-batz          #+#    #+#             */
/*   Updated: 2018/08/19 23:05:02 by lde-batz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <stdlib.h>

# define BUFFER_SIZE 1

char	*read_stdin(void);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
void	ft_result(char *str, int w, int h);
int		width(char *str);
int		height(char *str);
char	*colle_00(int x, int y);
char	*colle_01(int x, int y);
char	*colle_02(int x, int y);
char	*colle_03(int x, int y);
char	*colle_04(int x, int y);
void	ft_print_colle(int i, int w, int h, int results);
int		ft_strcmp(char *s1, char *s2);

#endif
