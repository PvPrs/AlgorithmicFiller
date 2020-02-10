/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-boc <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/01/15 11:14:59 by dvan-boc      #+#    #+#                 */
/*   Updated: 2020/01/15 11:15:00 by dvan-boc      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/filler.h"
#include "../libft/includes/libft.h"
#include <stdio.h>

int		game_started(char *name)
{
	char *line;
	if (get_next_line(0, &line) && line && ft_strlen(line) > 10 &&
		!ft_strncmp(line, "$$$ exec p", 9) && (line[10] == '1' || line[10] == '2'))
	{
		init_game(line[10] == '1' ? 1 : 2);
		getchar();
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int fd;

	fd = 0;
	if (argc != 3)
	{
		return (-1);
	}
	game_started(argv[0]);
	return (0);

}
