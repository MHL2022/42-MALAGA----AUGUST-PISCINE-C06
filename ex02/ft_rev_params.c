/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marialedesmabasualdo <maledesm@studen      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 23:01:32 by marialede         #+#    #+#             */
/*   Updated: 2022/08/25 23:54:57 by marialede        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int a;
	int b;

	a = argc - 1;
	while( a > 0)
	{
		b = 0;
		while (argv[a][b] != '\0')
		{
			write (1, &argv[a][b], 1);
			b++;
		}
		a--;
		write (1, "\n", 1);
	}
	return (0);
}
