/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmbexe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 16:58:45 by tmbexe            #+#    #+#             */
/*   Updated: 2020/06/19 17:09:32 by tmbexe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_putchar(char c)
{
    putchar(c);
}

void ft_print_numbers()
{
    char numbers;
    numbers = '0';

    while (numbers <= '9')
    {
        ft_putchar(numbers);
        numbers++;
    }
	ft_putchar('\n');
}

int main()
{
    ft_print_numbers();

    return 0;
}
