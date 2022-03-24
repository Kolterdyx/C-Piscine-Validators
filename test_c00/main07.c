/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main07.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cigarcia <cigarcia@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 09:45:50 by cigarcia          #+#    #+#             */
/*   Updated: 2022/03/24 17:13:12 by cigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ex07/ft_putnbr.c"
#include <stdio.h>
#include "colors.h"

int	main(void)
{
	printf(CYN"-- Comprobando ex07:\n"RESET);
	printf(BLU"    Ejecutando "GRN"'ft_putnbr(100);'"RESET);
	printf(RESET"\n");
	ft_putnbr(100);
	printf("\n");
	printf(BLU"    Ejecutando "GRN"'ft_putnbr(2147483647);'"RESET);
	printf(RESET"\n");
	ft_putnbr(__INT_MAX__);
	printf("\n");
	printf(BLU"    Ejecutando "GRN"'ft_putnbr(-2147483648);'"RESET);
	printf(RESET"\n");
	ft_putnbr(-__INT_MAX__ - 1);
	printf("\n\n");
}
