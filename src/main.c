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

static int		game_started()
{
	char *line;
	if (get_next_line(0, &line) && line && ft_strlen(line) > 10 &&
		!ft_strncmp(line, "$$$ exec p", 9) && (line[10] == '1' || line[10] == '2'))
	{
		event_listener(init_game(line[10] == '1' ? 1 : 2));
	}
	return (0);
}

int		main()
{
	game_started();
	return (0);

}
