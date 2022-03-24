/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cigarcia <cigarcia@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 09:43:07 by cigarcia          #+#    #+#             */
/*   Updated: 2022/03/24 17:11:31 by cigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ex04/ft_is_negative.c"
#include <stdio.h>
#include "colors.h"

int	main(void)
{
	printf(CYN"-- Comprobando ex04:\n"RESET);
	printf(BLU"    Ejecutando "GRN"'ft_is_negative(1);'"RESET);
	printf(RESET"\n");
	ft_is_negative(1);
	printf(RESET"\n");
	printf(BLU"    Ejecutando "GRN"'ft_is_negative(0);'"RESET);
	printf(RESET"\n");
	ft_is_negative(0);
	printf(RESET"\n");
	printf(BLU"    Ejecutando "GRN"'ft_is_negative(-1);'"RESET);
	printf(RESET"\n");
	ft_is_negative(-1);
	printf(RESET"\n");
	printf("\n\n");
}
