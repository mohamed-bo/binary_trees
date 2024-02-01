#include "binary_trees.h"

/**
 * binary_tree_nodes - number node who are parents
 * @tree: adress of root
 *
 * Return: number node who are parents
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree)
	{
		count += (tree->left || tree->right) ? 1 : 0;
		count += binary_tree_nodes(tree->left);
		count += binary_tree_nodes(tree->right);
	}

	return (count);
}
