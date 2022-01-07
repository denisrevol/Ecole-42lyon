/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drevol <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 10:03:08 by drevol            #+#    #+#             */
/*   Updated: 2020/03/12 10:05:00 by drevol           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		ft_printf(const char *argv, ...)
{
	va_list		ap;
	t_printf	tpf;
	t_flags		*flag;
	int			rt;

	flag = malloc(sizeof(t_flags));
	tpf.nb = malloc(sizeof(int));
	tpf.tmp = malloc(sizeof(char));
	ft_flaginit(flag);
	*tpf.nb = 0;
	va_start(ap, argv);
	tpf.src = ft_strdup((char*)argv);
	ft_parsing(ap, tpf, flag);
	va_end(ap);
	free(flag);
	rt = *tpf.nb;
	free(tpf.src);
	free(tpf.nb);
	free(tpf.tmp);
	return (rt);
}
