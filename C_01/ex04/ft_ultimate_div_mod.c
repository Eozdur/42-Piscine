/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozdur <eozdur@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 13:36:27 by eozdur            #+#    #+#             */
/*   Updated: 2022/02/19 14:00:55 by eozdur           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int*b)
{
	int	bolum;
	int	kalan;

	if (*b != 0)
	{
		bolum = *a / *b;
		kalan = *a % *b;
		*a = bolum;
		*b = kalan;
	}
}
