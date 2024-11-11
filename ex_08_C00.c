/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex_08_C00.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibrunial <ibrunial@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 08:44:40 by ibrunial          #+#    #+#             */
/*   Updated: 2024/11/11 11:24:41 by ibrunial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	stampa(unsigned char *arr, int n)
{
		char i;
		char p_char;

		i = 0; 
		while (i < n)
		{
			p_char = arr[i] + '0';
			write(1, &p_char, 1);
			i++;
		}
}

void    ft_print_combn(int n)
{
    unsigned char   digits[10];
    int             i;
    int             j;
    int             count;

    i = 0;
    while (i < n)
    {
        digits[i] = i;
        i++;
    }
    while (!(digits[0] == 10 - n && digits[n - 1] == 9))
    {
        if (digits[n - 1] != 9)
        {
            stampa(digits, n);
            write(1, ", ", 2);
            digits[n - 1]++;
        }
        i = n - 1;
        j = 9;
        count = 0;
        while (digits[i] == j)
        {
            count++;
            i--;
            j--;
        }
        if (count)
        {
            stampa(digits, n);
            write(1, ", ", 2);
            i = n - count;
            digits[i - 1]++;
            while (i < n)
            {
                digits[i] = digits[i - 1] + 1;
                i++;
            }
        }
    }
    stampa(digits, n);
    write(1, "\n", 1);
}


int	main(){
	ft_print_combn(3);
}