/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozdur <eozdur@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 16:33:57 by eozdur            #+#    #+#             */
/*   Updated: 2022/02/19 16:39:55 by eozdur           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	gecici;

	i = 0;
	while (i < (size / 2))
	{
		gecici = tab [i];
		tab [i] = tab [size - 1 - i];
		tab [size - 1 - i] = gecici;
		i++;
	}
}
