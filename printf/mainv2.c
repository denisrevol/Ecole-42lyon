int		ft_printf(const char *, ...);
#include "libftprintf.h"
#include <limits.h>
#include <stdio.h>

typedef	struct		s_main
{
	int		count;
	int		count2;
}					t_main;

void	ft_return_val(int mine, int real, t_main *main)
{
	if (real == mine)
	{
		main->count++;
		main->count2++;
		printf("\033[1;32m%s\033[0m\n\n\n", "OK");
	}
	else
	{
		main->count2++;
		printf("\033[1;31m%s\033[0m\n\n\n", "KO");
	}
}

int	main()
{
	t_main	main[1];
	int		mine;
	int		real;
	char	*str = "astek";
	char	stre[] = {'a', 's', 10, 'E', 'k', 0, 3, 123, -15, 15};
	
	main->count = 0;
	main->count2 = 0;
    mine = 0;
    real = 0;

printf("##### Tests [-10c] #####\n");
	real = printf("|%-10c|\n", stre[5]);
	mine = ft_printf("|%-10c|\n", stre[5]);
	ft_return_val(mine, real, main);
    
/*	printf("\033[1;31m#######################################\033[0m\n\n\n");

	printf("##### Tests [c] #####\n");
	real = printf("|%c|\n", stre[0]);
	mine = ft_printf("|%c|\n", stre[0]);
	ft_return_val(mine, real, main);

	printf("##### Tests [c] #####\n");
	real = printf("|%c|\n", 0);
	mine = ft_printf("|%c|\n", 0);
	ft_return_val(mine, real, main);
	
	printf("##### Tests [-c] #####\n");
	real = printf("|%-c|\n", stre[0]);
	mine = ft_printf("|%-c|\n", stre[0]);
	ft_return_val(mine, real, main);
	
	printf("##### Tests [*c] : 6 #####\n");
	real = printf("|%*c|\n", 6, stre[0]);
	mine = ft_printf("|%*c|\n", 6, stre[0]);
	ft_return_val(mine, real, main);
	
	printf("##### Tests [-*c] : 6#####\n");
	real = printf("|%-*c|\n", 6, stre[0]);
	mine = ft_printf("|%-*c|\n", 6, stre[0]);
	ft_return_val(mine, real, main);

	printf("##### Tests [-------------*c] : 6#####\n");
	real = printf("|%-------------*c|\n", 6, stre[0]);
	mine = ft_printf("|%-------------*c|\n", 6, stre[0]);
	ft_return_val(mine, real, main);
	
	printf("##### Tests [1c] #####\n");
	real = printf("|%1c|\n", stre[0]);
	mine = ft_printf("|%1c|\n", stre[0]);
	ft_return_val(mine, real, main);
	
	printf("##### Tests [10c] #####\n");
	real = printf("|%10c|\n", stre[0]);
	mine = ft_printf("|%10c|\n", stre[0]);
	ft_return_val(mine, real, main);

	printf("##### Tests [-1c] #####\n");
	real = printf("|%-1c|\n", stre[0]);
	mine = ft_printf("|%-1c|\n", stre[0]);
	ft_return_val(mine, real, main);
	
	printf("##### Tests [-10c] #####\n");
	real = printf("|%-10c|\n", stre[0]);
	mine = ft_printf("|%-10c|\n", stre[0]);
	ft_return_val(mine, real, main);

	printf("##### Tests [-10c|-1c|*c] : a a 6 a #####\n");
	real = printf("|%-10c|%-1c|%*c|\n", stre[0], stre[0], 6, stre[0]);
	mine = ft_printf("|%-10c|%-1c|%*c|\n", stre[0], stre[0], 6, stre[0]);
	ft_return_val(mine, real, main);

	printf("##### Tests [-10c] #####\n");
	real = printf("|%-10c|\n", stre[5]);
	mine = ft_printf("|%-10c|\n", stre[5]);
	ft_return_val(mine, real, main);

	printf("##### Tests [*c] : -1000 #####\n");
	real = printf("|%*c|\n", -1000, stre[0]);
	mine = ft_printf("|%*c|\n", -1000, stre[0]);
	ft_return_val(mine, real, main);

	printf("\033[1;31m#######################################\033[0m\n\n\n");
    
	printf("##### Tests [s] #####\n");
	real = printf("|%s|\n", NULL);
	mine = ft_printf("|%s|\n", NULL);
	ft_return_val(mine, real, main);
	
	printf("##### Tests [*.*s] #####\n");
	real = printf("|%*.*s|\n", 10, 10, NULL);
	mine = ft_printf("|%*.*s|\n", 10, 10, NULL);
	ft_return_val(mine, real, main);

	printf("##### Tests [*.*s] #####\n");
	real = printf("|%*.*s|\n", 10, 3, NULL);
	mine = ft_printf("|%*.*s|\n", 10, 3, NULL);
	ft_return_val(mine, real, main);

	printf("##### Tests [-*.*s] : 10 3 #####\n");
	real = printf("|%-*.*s|\n", 10, 3, NULL);
	mine = ft_printf("|%-*.*s|\n", 10, 3, NULL);
	ft_return_val(mine, real, main);

	printf("##### Tests [s] #####\n");
	real = printf("|%s|\n", str);
	mine = ft_printf("|%s|\n", str);
	ft_return_val(mine, real, main);
	
	printf("##### Tests [-s] #####\n");
	real = printf("|%-s|\n", str);
	mine = ft_printf("|%-s|\n", str);
	ft_return_val(mine, real, main);
	
	printf("##### Tests [*s] : 6 #####\n");
	real = printf("|%*s|\n", 6, str);
	mine = ft_printf("|%*s|\n", 6, str);
	ft_return_val(mine, real, main);
	
	printf("##### Tests [-*s] : 6 #####\n");
	real = printf("|%-*s|\n", 6, str);
	mine = ft_printf("|%-*s|\n", 6, str);
	ft_return_val(mine, real, main);
	
	printf("##### Tests [-------------*s] : 6 #####\n");
	real = printf("|%-------------*s|\n", 6, str);
	mine = ft_printf("|%-------------*s|\n", 6, str);
	ft_return_val(mine, real, main);
	
	printf("##### Tests [.3s] #####\n");
	real = printf("|%.3s|\n", str);
	mine = ft_printf("|%.3s|\n", str);
	ft_return_val(mine, real, main);
	
	printf("##### Tests [.10s] #####\n");
	real = printf("|%.10s|\n", str);
	mine = ft_printf("|%.10s|\n", str);
	ft_return_val(mine, real, main);
	
	printf("##### Tests [3s] #####\n");
	real = printf("|%3s|\n", str);
	mine = ft_printf("|%3s|\n", str);
	ft_return_val(mine, real, main);
	
	printf("##### Tests [10s] #####\n");
	real = printf("|%10s|\n", str);
	mine = ft_printf("|%10s|\n", str);
	ft_return_val(mine, real, main);

	printf("##### Tests [-3s] #####\n");
	real = printf("|%-3s|\n", str);
	mine = ft_printf("|%-3s|\n", str);
	ft_return_val(mine, real, main);
	
	printf("##### Tests [-10s] #####\n");
	real = printf("|%-10s|\n", str);
	mine = ft_printf("|%-10s|\n", str);
	ft_return_val(mine, real, main);

	printf("##### Tests [-20s] #####\n");
	real = printf("|%-20s|\n", "test");
	mine = ft_printf("|%-20s|\n", "test");
	ft_return_val(mine, real, main);
	
	printf("##### Tests [*s] : -3#####\n");
	real = printf("|%*s|\n", -3, str);
	mine = ft_printf("|%*s|\n", -3, str);
	ft_return_val(mine, real, main);

	printf("##### Tests [*s] : -6#####\n");
	real = printf("|%*s|\n", -6, str);
	mine = ft_printf("|%*s|\n", -6, str);
	ft_return_val(mine, real, main);
	
	printf("##### Tests [.*s] : 3#####\n");
	real = printf("|%.*s|\n", 3, str);
	mine = ft_printf("|%.*s|\n", 3, str);
	ft_return_val(mine, real, main);
	
	printf("##### Tests [.*s] : 6#####\n");
	real = printf("|%.*s|\n", 6, str);
	mine = ft_printf("|%.*s|\n", 6, str);
	ft_return_val(mine, real, main);

	printf("##### Tests [.*s] : -3#####\n");
	real = printf("|%.*s|\n", -3, str);
	mine = ft_printf("|%.*s|\n", -3, str);
	ft_return_val(mine, real, main);
	
	printf("##### Tests [.*s] : -6#####\n");
	real = printf("|%.*s|\n", -6, str);
	mine = ft_printf("|%.*s|\n", -6, str);
	ft_return_val(mine, real, main);

    printf("##### Tests [3.3s] #####\n");
	real = printf("|%3.3s|\n", str);
	mine = ft_printf("|%3.3s|\n", str);
	ft_return_val(mine, real, main);*/

	/*printf("##### Tests [10.10s] #####\n");
	real = printf("|%10.10s|\n", str);
	mine = ft_printf("|%10.10s|\n", str);
	ft_return_val(mine, real, main);

	printf("##### Tests [-3.3s] #####\n");
	real = printf("|%-3.3s|\n", str);
	mine = ft_printf("|%-3.3s|\n", str);
	ft_return_val(mine, real, main);

	printf("##### Tests [-10.10s] #####\n");
	real = printf("|%-10.10s|\n", str);
	mine = ft_printf("|%-10.10s|\n", str);
	ft_return_val(mine, real, main);

	printf("##### Tests [*.*s] : 3 3#####\n");
	real = printf("|%*.*s|\n", 3, 3, str);
	mine = ft_printf("|%*.*s|\n", 3, 3, str);
	ft_return_val(mine, real, main);

	printf("##### Tests [*.*s] : 10 10#####\n");
	real = printf("|%*.*s|\n", 10, 10, str);
	mine = ft_printf("|%*.*s|\n", 10, 10, str);
	ft_return_val(mine, real, main);

	printf("##### Tests [*.*s] : -3 -3#####\n");
	real = printf("|%*.*s|\n", -3, -3, str);
	mine = ft_printf("|%*.*s|\n", -3, -3, str);
	ft_return_val(mine, real, main);

	printf("##### Tests [*.*s] : 10 -10#####\n");
	real = printf("|%*.*s|\n", 10, -10, str);
	mine = ft_printf("|%*.*s|\n", 10, -10, str);
	ft_return_val(mine, real, main);

	printf("##### Tests [*.*s] : -10 10#####\n");
	real = printf("|%*.*s|\n", -10, 10, str);
	mine = ft_printf("|%*.*s|\n", -10, 10, str);
	ft_return_val(mine, real, main);

	printf("##### Tests [*.*s] : -10 -10#####\n");
	real = printf("|%*.*s|\n", -10, -10, str);
	mine = ft_printf("|%*.*s|\n", -10, -10, str);
	ft_return_val(mine, real, main);

	printf("##### Tests [-*.*s] : -3 -3#####\n");
	real = printf("|%-*.*s|\n", -3, -3, str);
	mine = ft_printf("|%-*.*s|\n", -3, -3, str);
	ft_return_val(mine, real, main);

	printf("##### Tests [-*.*s] : -10 -10#####\n");
	real = printf("|%-*.*s|\n", -10, -10, str);
	mine = ft_printf("|%-*.*s|\n", -10, -10, str);
	ft_return_val(mine, real, main);

	printf("##### Tests [10.0s] #####\n");
	real = printf("|%10.0s|\n", str);
	mine = ft_printf("|%10.0s|\n", str);
	ft_return_val(mine, real, main);

	printf("##### Tests [10.1s] #####\n");
	real = printf("|%10.1s|\n", str);
	mine = ft_printf("|%10.1s|\n", str);
	ft_return_val(mine, real, main);

	printf("##### Tests [-10.1s] #####\n");
	real = printf("|%-10.1s|\n", str);
	mine = ft_printf("|%-10.1s|\n", str);
	ft_return_val(mine, real, main);

	printf("##### Tests [-10.3s] #####\n");
	real = printf("|%-10.3s|\n", str);
	mine = ft_printf("|%-10.3s|\n", str);
	ft_return_val(mine, real, main);

	printf("##### Tests [10.3s] #####\n");
	real = printf("|%10.3s|\n", str);
	mine = ft_printf("|%10.3s|\n", str);
	ft_return_val(mine, real, main);

	printf("##### Tests [*.*s] : 10 3 #####\n");
	real = printf("|%*.*s|\n", 10, 3, str);
	mine = ft_printf("|%*.*s|\n", 10, 3, str);
	ft_return_val(mine, real, main);

	printf("##### Tests [-*.*s] : 10 3 #####\n");
	real = printf("|%-*.*s|\n", 10, 3, str);
	mine = ft_printf("|%-*.*s|\n", 10, 3, str);
	ft_return_val(mine, real, main);

	printf("##### Tests [*.*s] : -10 3 #####\n");
	real = printf("|%*.*s|\n", -10, 3, str);
	mine = ft_printf("|%*.*s|\n", -10, 3, str);
	ft_return_val(mine, real, main);

	printf("##### Tests [*.*s] : 10 0 #####\n");
	real = printf("|%*.*s|\n", 10, 0, str);
	mine = ft_printf("|%*.*s|\n", 10, 0, str);
	ft_return_val(mine, real, main);

	printf("##### Tests [10.0s] : 10 0 #####\n");
	real = printf("|%10.0s|\n", str);
	mine = ft_printf("|%10.0s|\n", str);
	ft_return_val(mine, real, main);

	printf("##### Tests [.s] #####\n");
	real = printf("|%.s|\n", str);
	mine = ft_printf("|%.s|\n", str);
	ft_return_val(mine, real, main);

	printf("##### Tests [---*s] #####\n");
    real = printf("|%---*s|\n", 0, "test");
	mine = ft_printf("|%---*s|\n", 0, "test");
    ft_return_val(mine, real, main);

	printf("##### Tests [*s] #####\n");
    real = printf("|%*s|\n", 0, "test");
	mine = ft_printf("|%*s|\n", 0, "test");
    ft_return_val(mine, real, main);

	printf("##### Tests [2.s] #####\n");
    real = printf("|%2.s|\n", "test");
	mine = ft_printf("|%2.s|\n", "test");
	ft_return_val(mine, real, main);

	printf("##### Tests [3.*s] : 10 #####\n");
	real = printf("|%3.*s|\n", 10, str);
	mine = ft_printf("|%3.*s|\n", 10, str);
	ft_return_val(mine, real, main);

	printf("##### Tests [.s] : 42 #####\n");
	real = printf("|%.s|\n", "42");
	mine = ft_printf("|%.s|\n", "42");
	ft_return_val(mine, real, main);

	printf("##### Tests [.015s] : 42 #####\n");
	real = printf("|%.015s|\n", "42");
	mine = ft_printf("|%.015s|\n", "42");
	ft_return_val(mine, real, main);

	printf("##### Tests [-150.15s] : 42 #####\n");
	real = printf("|%-150.15s|\n", "42");
	mine = ft_printf("|%-150.15s|\n", "42");
	ft_return_val(mine, real, main);

	printf("##### Tests [-150.*s] : 15 #####\n");
	real = printf("|%-150.*s|\n", 15, "42");
	mine = ft_printf("|%-150.*s|\n", 15, "42");
	ft_return_val(mine, real, main);

	printf("##### Tests [-*.15s] : 150 #####\n");
	real = printf("|%-*.15s|\n", 150, "42");
	mine = ft_printf("|%-*.15s|\n", 150, "42");
	ft_return_val(mine, real, main);

	printf("##### Tests [-*.*s] : 150 15 #####\n");
	real = printf("|%-*.*s|\n", 150, 15, "42");
	mine = ft_printf("|%-*.*s|\n", 150, 15, "42");
	ft_return_val(mine, real, main);*/
}