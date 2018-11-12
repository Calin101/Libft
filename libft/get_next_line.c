/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   get_next_line.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: calin <calin@student.le-101.fr>            +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/23 13:50:18 by calin        #+#   ##    ##    #+#       */
/*   Updated: 2018/11/09 18:34:05 by calin       ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int		ft_check_index(const char *tab, int c)
{
	int index;

	index = 0;
	if (tab == NULL)
		return (-1);
	while (tab[index])
	{
		if (tab[index] == c)
			return (index);
		index++;
	}
	return (-1);
}

int		ft_check_error(const int fd, int buff_size, char *buf)
{
	if (fd < 0 || buff_size <= 0 || fd >= 10240)
		return (-1);
	if (read(fd, buf, 0))
		return (-1);
	return (0);
}

char	*fill_tab(char *buf, char **tab, const int fd, int nbchar)
{
	char *tmp;

	buf[nbchar] = '\0';
	if (tab[fd] == NULL)
		tab[fd] = ft_strdup(buf);
	else
	{
		tmp = tab[fd];
		tab[fd] = ft_strjoin(tab[fd], buf);
		free(tmp);
	}
	return (tab[fd]);
}

int		get_next_line(const int fd, char **line)
{
	char		buf[BUFF_SIZE + 1];
	int			nb_char;
	static char	*tab[10240];
	int			start;
	char		*tmp;

	if ((ft_check_error(fd, BUFF_SIZE, buf)) == -1)
		return (-1);
	while (ft_check_index(tab[fd], '\n') == -1 &&
	(nb_char = read(fd, buf, BUFF_SIZE)) > 0)
		fill_tab(buf, tab, fd, nb_char);
	if (!nb_char && !tab[fd])
		return (0);
	start = (ft_check_index(tab[fd], '\n') == -1) ? ft_strlen(tab[fd]) :
	ft_check_index(tab[fd], '\n');
	*line = ft_strsub(tab[fd], 0, start);
	if (tab[fd] != NULL)
	{
		tmp = tab[fd];
		tab[fd] = ft_strsub(tab[fd], start + 1, ft_strlen(tab[fd]) - start);
		free(tmp);
	}
	return (1);
}
