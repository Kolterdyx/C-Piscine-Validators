/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main05.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cigarcia <cigarcia@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 09:44:28 by cigarcia          #+#    #+#             */
/*   Updated: 2022/03/24 17:11:46 by cigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ex05/ft_print_comb.c"
#include <stdio.h>
#include "colors.h"

int	main(void)
{
	printf(CYN"-- Comprobando ex05:\n"RESET);
	printf(BLU"    Ejecutando "GRN"'ft_print_comb();'"RESET);
	printf(RESET"\n");
	ft_print_comb();
	printf("\n\n");
}
