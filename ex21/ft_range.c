/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdatskov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 19:36:31 by sdatskov          #+#    #+#             */
/*   Updated: 2018/10/22 19:36:32 by sdatskov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *a;
	int i;

	i = 0;
	if (max <= min)
		return (0);
	a = malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		a[i] = min;
		min++;
		i++;
	}
	return (a);
}
