/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainitoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drevol <drevol@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 17:45:21 by drevol            #+#    #+#             */
/*   Updated: 2020/02/05 10:57:18 by drevol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainitoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drevol <drevol@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 17:44:08 by drevol            #+#    #+#             */
/*   Updated: 2020/02/04 17:45:13 by drevol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main ()
{

    printf("itoa de -1 = %s\n", ft_itoabase(-1,"0123456789abcdef"));
     printf("itoa de -1000 = %s\n", ft_itoabase(-1000,"0123456789abcdef"));
     printf("itoa de INT MAX  + 1 = %s\n", ft_itoabase(2147483648,"0123456789abcdef"));
     printf("itoa de INT MAX = %s\n", ft_itoabase(2147483647,"0123456789abcdef"));
     printf("itoa de INT MIN = %s\n", ft_itoabase(-2147483648,"0123456789abcdef"));
     printf("printf de -1000 = %x\n", -1000);


}
