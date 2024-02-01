#include "binary_trees.h"

/**
 * binary_tree_postorder - func goes through a binary tree post-order traversa
 * @tree: adress of root
 * @func: Pointer to function to call in each node
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
