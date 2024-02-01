#include "binary_trees.h"

/**
 * binary_tree_is_root - is a node a root
 * @node: adress of node
 * 
 * Return: 1 si node root
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node || node->parent)
		return (0);

	return (1);
}
