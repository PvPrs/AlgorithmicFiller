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
struct s_player
{
	int		id;
	int		points;
	char	*name;
	char	*token;
	char	*(*transform_token)(char *map);
	char 	*(*get_token)(int fd);
	int		(*set_token)(char *map, int col, int row);
};

int		set_token(char *map, int col, int row);
char	*get_token(int fd);
char	*transform_token(char *map);
struct s_player create_player(int id, char *name);
#endif //FILLER_FILLER_H
