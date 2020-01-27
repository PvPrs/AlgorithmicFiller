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

#include "filler.h"
#include "libft.h"
#include <stdio.h>

int		game_started(char *name)
{
	char *line;
	struct s_player player;
	if (get_next_line(0, &line) && line && ft_strlen(line) > 10 &&
		!ft_strncmp(line, "$$$ exec p", 9) &&
		(line[10] == '1' || line[10] == '2')) {
		player = create_player(line[10] == '1' ? 1 : 2, name);
		printf("Player: %d\n", player.id);
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
