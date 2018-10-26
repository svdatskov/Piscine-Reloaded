/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdatskov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 19:30:53 by sdatskov          #+#    #+#             */
/*   Updated: 2018/10/22 19:30:54 by sdatskov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*str++ != '\0')
	{
		i++;
	}
	return (i);
}

char		*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char		*ft_strdup(char *src)
{
	char *c;

	c = malloc(ft_strlen(src) + 1);
	if (c == 0)
		return (0);
	ft_strcpy(c, src);
	return (c);
}
