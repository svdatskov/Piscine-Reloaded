/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdatskov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 19:01:34 by sdatskov          #+#    #+#             */
/*   Updated: 2018/10/22 19:01:38 by sdatskov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int res;

	res = 1;
	if (nb > 12 || nb < 0)
		return (0);
	else if (nb == 1 || nb == 0)
		return (1);
	else
	{
		while (nb > 0)
		{
			res *= nb;
			nb--;
		}
		return (res);
	}
}
