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

/*
** @brief
** The Virtual Machine 'filler_vm' outputs both a board & piece(4x4 grid) on
** every turn allowing you to read and set the pieces through stdin. The goal
** is to collect points by having the highest number of pieces on the board.
** When the game starts the virtual machine initializes the board with
** initial tokens.
** @rules
** Only 1 token(single character) of a game piece is mandatory & allowed to
** overlap with a token on the board. A piece may not exceed the dimensions
** of the board(this includes the padding of a piece represented by dots).
** The game stops at the first error: either when a game piece cannot be
 * placed anymore or it has been wrongly placed.
*/

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
