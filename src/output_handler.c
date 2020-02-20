/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   map_gen.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-boc <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/01/15 11:26:06 by dvan-boc      #+#    #+#                 */
/*   Updated: 2020/01/15 11:26:07 by dvan-boc      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*
** The Virtual Machine 'filler_vm'
** Prints the map upon starting the project.
** Prints players 'token' on every turn.
*/

#include "../libft/includes/libft.h"
#include "../includes/filler.h"
#include "../includes/player.h"
#include <stdlib.h>

#define stdout 0

/**
**
** Initializes the information read from @stdout
** to the right variable, both Map & Piece.
** @param map A pointer to a 2D Array
** @param line Represents a pointer the current position
** @param x represents the row size
** @param y represents the col size
** @return a pointer to a 2D Array generated by alloc_map
*/
static struct s_map	*init_output(struct s_map *map, char *line)
{
	int index;

	index = 0;
	while (get_next_line(stdout, &line) && index != map->x)
	{
			while (line)
			{
				if (*line == '.' || *line == 'O' || *line =='X' ||
					*line == 'o' || *line == 'x' || *line == '*')
					ft_strcpy(&map->map[index], line);
				else
					line++;
			}
			index++;
	}
	return (map);
}

/*
** Reads file contents
** @param map represents a pointer to a specific element to assign to.
** @param identifier represents the a phrase to look for, i.e. "Plateau ", or "piece ".
** @param delimiter represents a space in both cases.
** @param len for strncmp
** @param readType: 0 = Read Map, 1 = Read Token.
** @return A pointer to the read map;
** { Expression statements are within scope }
**/
struct s_map 	*read_stdout(struct s_map *map, char *identifier, char delimiter, int len)
{
	char	*line;

	while (get_next_line(stdout, &line))
	{
		if (ft_strncmp(line, identifier, len))
		{
			while (*line != ':')
			{
				*line == delimiter ? *map = (struct s_map) {
					.x = ft_atoi(line)
				} : (struct s_map) { .y = ft_atoi(line) };
				line++;
			}
		}
	}
	if ((ft_strcmp(identifier, "Plateau") || ft_strcmp(identifier, "Piece") == 0))
		map->map = malloc(sizeof(char[map->x][map->y]));
	return (init_output(map, line));
}

/**
 * encapsulates the read_stdout function
 * and returns a game_map read from 'Standard Output'
 * @return a Filled game_map
 */
struct s_map	*get_map(struct s_map *map)
{
	return (read_stdout(map, "Plateau", ' ', 8));
}

/**
 * encapsulates the read_stdout function
 * and returns a game_piece read from 'Standard Output'
 * @return a Filled game_piece
 */
struct s_map	*get_piece(struct s_map *piece)
{
	return (read_stdout(piece, "Piece", ' ', 5));
}
