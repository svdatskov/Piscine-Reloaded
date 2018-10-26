/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdatskov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 15:22:36 by sdatskov          #+#    #+#             */
/*   Updated: 2018/10/24 15:22:38 by sdatskov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstring(char *c)
{
	int i;

	i = 0;
	while (c[i] != '\0')
	{
		ft_putchar(c[i]);
		i++;
	}
}

int		ft_fd(char *arr)
{
	int		fd;
	int		ret;
	char	buf[4096 + 1];

	fd = open(arr, O_RDONLY);
	if (fd == -1)
		return (1);
	ret = read(fd, buf, 4096);
	buf[ret] = '\0';
	ft_putstring(buf);
	if (close(fd) == -1)
		return (1);
	return (0);
}

int		main(int argc, char **argv)
{
	if (argc == 1)
	{
		ft_putstring("File name missing.\n");
		return (1);
	}
	if (argc == 2)
	{
		ft_fd(argv[1]);
	}
	if (argc > 2)
	{
		ft_putstring("Too many arguments.\n");
		return (1);
	}
	return (0);
}
