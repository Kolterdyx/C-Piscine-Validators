/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cigarcia <cigarcia@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 09:51:19 by cigarcia          #+#    #+#             */
/*   Updated: 2022/03/24 17:10:22 by cigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ex02/ft_print_reverse_alphabet.c"
#include <stdio.h>
#include "colors.h"

int	main(void)
{
	printf(CYN"-- Comprobando ex02:\n"RESET);
	printf(BLU"    Ejecutando "GRN"'ft_print_reverse_alphabet();'"RESET);
	printf(RESET"\n");
	ft_print_reverse_alphabet();
	printf("\n\n");
}
