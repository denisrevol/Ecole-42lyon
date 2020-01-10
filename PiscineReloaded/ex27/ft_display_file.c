/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_display_file.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: drevol <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/14 15:04:22 by drevol       #+#   ##    ##    #+#       */
/*   Updated: 2019/10/14 15:04:32 by drevol      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>

#define BUF_SIZE 4096

void		ft_write(int fd)
{
	int		i;
	int		ret;
	char	buf[BUF_SIZE + 1];

	i = 0;
	ret = read(fd, buf, BUF_SIZE);
	while (i < ret)
	{
		write(1, &buf[i], 1);
		i++;
	}
}

int			main(int argc, char **argv)
{
	int		fd;

	fd = open(argv[1], O_RDONLY);
	if (argc < 2)
		write(2, "File name missing.\n", 19);
	else if (argc > 2)
		write(2, "Too many arguments.\n", 20);
	else
	{
		if (fd == -1)
		{
			write(2, "open failed\n", 12);
			return (1);
		}
		else
		{
			ft_write(fd);
		}
		close(fd);
	}
	return (0);
}
