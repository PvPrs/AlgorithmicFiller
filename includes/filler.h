/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   filler.h                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-boc <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/01/15 11:14:36 by dvan-boc      #+#    #+#                 */
/*   Updated: 2020/01/15 11:14:39 by dvan-boc      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLER_FILLER_H
#define FILLER_FILLER_H

/**
 * Struct represents a single 'player' object
 * Each object must be defined, and so must their function pointers.
 * @id		represents a user identifier (i.e. 'Player 1')
 * @token	represents either 'x' or 'o'
 * 			tokens must be overriden by capitals if != last piece (all others).
 * 			applied pieces must atleast override one cell of the previous piece.
 */
struct s_vars
{
	int		id;
	char	token;
	char	*piece;
	char	*map;
};

int		set_piece(char *map, int col, int row);
char	*get_piece(char *piece);
char	*transform_piece(char *map);
char	*read_stdout(char *identifier, char delimiter, int len);
void	init_game(int id);
#endif //FILLER_FILLER_H
