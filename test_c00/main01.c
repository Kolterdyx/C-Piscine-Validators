/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cigarcia <cigarcia@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 09:41:35 by cigarcia          #+#    #+#             */
/*   Updated: 2022/03/24 17:10:00 by cigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ex01/ft_print_alphabet.c"
#include <stdio.h>
#include "colors.h"

int	main(void)
{
	printf(CYN"-- Comprobando ex01:\n"RESET);
	printf(BLU"    Ejecutando "GRN"'ft_print_alphabet();'"RESET);
	printf(RESET"\n");
	ft_print_alphabet();
	printf("\n\n");
}
