/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cigarcia <cigarcia@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 09:43:51 by cigarcia          #+#    #+#             */
/*   Updated: 2022/03/24 17:10:33 by cigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ex03/ft_print_numbers.c"
#include <stdio.h>
#include "colors.h"

int	main(void)
{
	printf(CYN"-- Comprobando ex03:\n"RESET);
	printf(BLU"    Ejecutando "GRN"'ft_print_numbers();'"RESET);
	printf(RESET"\n");
	ft_print_numbers();
	printf("\n\n");
}
