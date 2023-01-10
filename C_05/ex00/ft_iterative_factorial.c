/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozdur <eozdur@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 14:10:44 by eozdur            #+#    #+#             */
/*   Updated: 2022/02/27 14:14:45 by eozdur           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fakto;

	fakto = 1;
	while (nb > 0)
	{
		fakto *= nb;
		nb --;
	}
	if (nb < 0)
	{
		return (0);
	}
	return (fakto);
}
