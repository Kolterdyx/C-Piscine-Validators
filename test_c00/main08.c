/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main08.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cigarcia <cigarcia@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 09:46:26 by cigarcia          #+#    #+#             */
/*   Updated: 2022/03/24 17:09:14 by cigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ex08/ft_print_combn.c"
#include <stdio.h>
#include "colors.h"

int	main(void)
{
	printf(CYN"-- Comprobando ex08:\n"RESET);
	printf(BLU"    Ejecutando "GRN"'ft_print_combn(2);'"RESET);
	printf(RESET"\n");
	ft_print_combn(2);
	printf("\n\n");
	printf(BLU"    Ejecutando "GRN"'ft_print_combn(3);'"RESET);
	printf(RESET"\n");
	ft_print_combn(3);
	printf("\n\n");
	printf(BLU"    Ejecutando "GRN"'ft_print_combn(4);'"RESET);
	printf(RESET"\n");
	ft_print_combn(4);
	printf("\n\n");
}
