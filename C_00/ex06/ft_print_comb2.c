/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozdur <eozdur@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 20:13:47 by eozdur            #+#    #+#             */
/*   Updated: 2022/02/15 10:45:30 by eozdur           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	yazdir(char a)
{
	write(1, &a, 1);
}	

void	ft_print_comb2(void)
{
	char	sayi1;
	char	sayi2;

	sayi1 = 0;
	sayi2 = 0;
	while (sayi1 <= 98)
	{
		sayi2 = (sayi1 + 1);
		while (sayi2 <= 99)
		{
			yazdir((sayi1 / 10) + '0');
			yazdir((sayi1 % 10) + '0');
			yazdir(' ');
			yazdir((sayi2 / 10) + '0');
			yazdir((sayi2 % 10) + '0');
			sayi2++;
			if (sayi1 != 98)
				write(1, ", ", 2);
		}
		sayi1++;
	}
}
