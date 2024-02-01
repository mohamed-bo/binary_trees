#include "binary_trees.h"

/**
 * binary_tree_inorder - func goes through a binary tree in-order traversal
 * @tree: adress of root
 * @func: Pointer to function to call in each node
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
