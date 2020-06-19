/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmbexe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 09:25:06 by tmbexe            #+#    #+#             */
/*   Updated: 2020/06/19 12:37:09 by tmbexe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_putchar(char c)
{
    putchar(c);
}

void ft_print_alphabet()
{
    char lt;
    lt = 'a';

    while (lt <= 'z')
    {
        ft_putchar(lt);
        lt++;
    }

	ft_putchar('\n');
}

int main()
{
    ft_print_alphabet();

    return 0;
}
