/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozdur <eozdur@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 18:10:02 by eozdur            #+#    #+#             */
/*   Updated: 2022/02/27 18:10:04 by eozdur           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power >= 1)
		return (nb * ft_recursive_power(nb, power - 1));
	else if (power == 0 && nb == 0)
		return (1);
	else if (power == 0)
		return (1);
	else
		return (0);
}
