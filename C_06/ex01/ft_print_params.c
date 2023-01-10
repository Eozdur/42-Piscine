/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozdur <eozdur@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 16:30:50 by eozdur            #+#    #+#             */
/*   Updated: 2022/03/01 20:52:10 by eozdur           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	j = 1;
	while (argc > j)
	{
		i = 0;
		while (argv[j][i])
		{
			write(1, &argv[j][i], 1);
				i++;
		}
		write(1, "\n", 1);
		j++;
	}
	return (0);
}
