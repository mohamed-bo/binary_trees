#include "binary_trees.h"


/**
 * binary_tree_is_leaf - Checks if node is leaf
 * @node: adress of node
 *
 * Return: 1 si node leaf
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{

	if (!node || node->left || node->right)
		return (0);

	return (1);
}
