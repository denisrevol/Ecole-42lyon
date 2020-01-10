/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_recursive_factorial.c                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: drevol <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/08 13:37:15 by drevol       #+#   ##    ##    #+#       */
/*   Updated: 2019/10/08 14:12:40 by drevol      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int n;

	n = nb;
	if (nb == 0)
		return (1);
	if (n < 0 || n > 12)
		return (0);
	else if (n == 1)
		return (n);
	else
	{
		n = n * ft_recursive_factorial(n - 1);
		return (n);
	}
}
