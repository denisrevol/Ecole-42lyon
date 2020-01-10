/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   get_next_line.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: drevol <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/11/28 13:15:36 by drevol       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/23 10:09:50 by drevol      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "get_next_line.h"

static char		*ft_read(int fd, char *buffer, int *ret)
{
	char	buff[BUFF_SIZE + 1];
	char	*tmp;

	tmp = NULL;
	if (buffer == NULL)
		buffer = ft_strdup("");
	while (((ft_strchr(buffer, '\n') == 0)) &&
			((*ret = read(fd, buff, BUFF_SIZE)) > 0))
	{
		buff[*ret] = '\0';
		tmp = buffer;
		buffer = ft_strjoin(tmp, buff);
		free(tmp);
	}
	return (buffer);
}

static char		*ft_null(char *buffer)
{
	free(buffer);
	buffer = NULL;
	return (buffer);
}

static int		ft_end(char *buffer, size_t i)
{
	if (!(buffer + i + 1) || (i == 0))
		return (0);
	return (1);
}

int				get_next_line(const int fd, char **line)
{
	static char	*buffer[FD_MAX];
	int			ret;
	size_t		i;
	char		*str;

	i = 0;
	if (fd < 0 || !line || fd > FD_MAX)
		return (-1);
	buffer[fd] = ft_read(fd, buffer[fd], &ret);
	if (ret < 0)
		return (-1);
	while ((buffer[fd][i]) && (buffer[fd][i] != '\n'))
		i++;
	*line = ft_strsub(buffer[fd], 0, i);
	if (ft_strchr(buffer[fd], '\n') != 0)
	{
		str = ft_strdup(buffer[fd] + i + 1);
		free(buffer[fd]);
		buffer[fd] = ft_strdup(str);
		free(str);
		return (1);
	}
	else
		buffer[fd] = ft_null(buffer[fd]);
	return (ft_end(buffer[fd], i));
}
