#include "binary_trees.h"

/**
 * binary_tree_preorder - func goes through a binary tree pre-order traversal
 * @tree: adress of root
 * @func: Pointer to function to call in each node
 *
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
