/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_print_alphabet.c                              .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: drevol <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/08 08:34:39 by drevol       #+#   ##    ##    #+#       */
/*   Updated: 2019/10/09 16:46:36 by drevol      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		ft_putchar(c);
		c++;
	}
}
