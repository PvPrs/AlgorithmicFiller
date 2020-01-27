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

/**
 * The Virtual Machine 'filler_vm'
 * Prints the map upon starting the project.
 * Prints players 'token' on every turn.
 */

#include "libft.h"
#include "filler.h"

#define stdout 0

/**
 * Reads file contents
 * @param file	represents the map file
 * 				@TODO: Probably reading from Standard Output. fd for: stdout = 1;
 * @return A pointer to the read map;
 */
char	*read_map()
{
	char	*map;
	char	*line;
	int		fd;
	int		col;
	int		row;

	fd = stdout;
	while (get_next_line(fd, &line))
	{
		if (line == )
	}
	map = alloc_map(map, col, row);
	return (map);
}

/**
 * @param map Represents a pointer to a linear allocated 2D Array.
 * @param col Represents the column size.
 * @param row Represents the line size.
 * @return
 */
int		alloc_map(char *map, int col, int row)
{
	map = malloc(sizeof(char[col][row]));
	if (!map)
	{
		return (-1);
	}
	return (0);
}
