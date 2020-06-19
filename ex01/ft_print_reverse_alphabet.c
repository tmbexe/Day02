/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmbexe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 12:22:47 by tmbexe            #+#    #+#             */
/*   Updated: 2020/06/19 12:48:55 by tmbexe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_putchar(char c)
{
    putchar(c);
}

void ft_print_reverse_alphabet()
{
    char lt;
    lt = 'z';

    while (lt >= 'a')
    {
        ft_putchar(lt);
        lt--;
    }
	ft_putchar('\n');
}

int main()
{
    ft_print_reverse_alphabet();

    return 0;
}
