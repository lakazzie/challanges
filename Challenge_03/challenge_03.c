/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   challenge_03.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakazzie <lakazzie@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/26 12:25:27 by lakazzie          #+#    #+#             */
/*   Updated: 2020/05/04 07:16:50 by lakazzie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char ch)
{
	write(1, &ch, 1);
}

void ft_putstr(char  *str)
{
	int i;
	i = 0;
	while(str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int ft_strlen(char *str)
{
	int length;
	length = 0;
	while(str[length] != '\0')
	{
		length++;
	}
	return(length);
}

int ft_isdigit(char c)
{
	int c;
	c = 0;
	if(c >= '0' && c <= '9')
	{
		{
		return (1);
		}
	}
	else 
	{
		return(0);
	}
	
}

int main(int argc, char **argv)
{
	int i;
	i = 0;
	
	if(argc == 1)
	{
		while(ft_isdigit(argv[1][0]) == 1 && ft_isdigit(argv[1][1]) == 1 && ft_isdigit(argv[1][2]) ==1 && ft_isdigit(argv[1][4]) == 1 && ft_isdigit(argv[1][5]) == 1 && ft_isdigit(argv[1][3]) == 0);
		{
			if((argv[1]) == (00:01 && 11:59))
			{
				ft_putstr("Sun is coming up.");
			}
			else if((argv[1]) == (12:01 && 23:59))
			{
				ft_putstr("Sun is going down.");
			}
			else if((argv[1]) == (12:00))
			{
				ft_putstr("Sun peaking.");
			}
		else
		{
			ft_putstr("I said time dude.");
		}	
		}
	}
	else
	{
		ft_putstr("Really dawg?");
	}
	
}