/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_iterative_factorial.c                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: drevol <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/08 11:09:21 by drevol       #+#   ##    ##    #+#       */
/*   Updated: 2019/10/09 16:56:42 by drevol      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	n;
	int	i;

	n = nb;
	i = 1;
	if (nb == 0)
		return (1);
	else if (nb > 0 && nb < 13)
	{
		while (i < nb)
		{
			n = n * (nb - i);
			i++;
		}
		return (n);
	}
	return (0);
}
