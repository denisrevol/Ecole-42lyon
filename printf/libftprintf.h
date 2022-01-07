/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drevol <drevol@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 10:11:23 by drevol            #+#    #+#             */
/*   Updated: 2020/04/10 19:21:36 by drevol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include "./Libft/libft.h"
# include <stdint.h>

#include <stdio.h>

typedef struct	s_printf
{
	char	*src;
	int		*nb;
	char	*tmp;
	char	*str;
}				t_printf;

typedef struct	s_flags
{
	int		right;
	int		left;
	int		point;
	int		pt;
	int		hexa;
	int		zero;
	int		star;
	int		neg;
	int		st;
	int		pt_alone;
}				t_flags;

int		ft_printf(const char *format, ...) __attribute__
((format(printf,1,2)));
int		ft_printf(const char *argv, ...);
int		ft_parsing(va_list ap, t_printf tpf, t_flags *flag);
int		ft_parse(va_list ap, t_printf tpf, t_flags *flag, int i);
void	ft_convert(va_list ap, t_printf tpf, t_flags *flag, int i);
void	ft_convert_bis(va_list ap, t_printf tpf, t_flags *flag, int i);
int		ft_nblen(long int n);
void	ft_flaginit(t_flags *flag);
int		ft_right(t_printf tpf, t_flags *flag, int i);
int		ft_zero(va_list ap, t_printf tpf, t_flags *flag, int i);
void	ft_tpfinit(t_printf tpf);
int		ft_left(t_printf tpf, t_flags *flag, int i);
void	ft_align(t_printf tpf, t_flags *flag, char *str);
void	ft_alignnb(t_printf tpf, t_flags *flag, long int nb);
void	ft_alignp(t_printf tpf, t_flags *flag, char *str);
int		ft_point(va_list ap, t_printf tpf, t_flags *flag, int i);
char	*ft_itoab(int nb);
void	ft_align_left(t_printf tpf, t_flags *flag, char *str, int p);
void    ft_alignnb_left(t_printf tpf, t_flags *flag, long int nb);
void    ft_alignnb_null(t_printf tpf, t_flags *flag);
#endif
