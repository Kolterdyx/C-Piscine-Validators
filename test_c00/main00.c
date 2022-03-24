/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cigarcia <cigarcia@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 09:41:03 by cigarcia          #+#    #+#             */
/*   Updated: 2022/03/24 17:06:35 by cigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ex00/ft_putchar.c"
#include <stdio.h>
#include "colors.h"

int	main(void)
{
	printf(CYN"-- Comprobando ex00:\n"RESET);
	printf(BLU"    Ejecutando "GRN"'ft_putchar('a')'"RESET);
	printf(RESET"\n");
	ft_putchar('a');
	printf(RESET"\n");
	printf(BLU"    Ejecutando "GRN"'ft_putchar('B')'"RESET);
	printf(RESET"\n");
	ft_putchar('B');
	printf("\n\n");
}
