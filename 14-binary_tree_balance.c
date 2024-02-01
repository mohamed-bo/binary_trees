#include "binary_trees.h"

/**
 * binary_tree_height - height of a binary tree
 * @tree: adress of root
 *
 * Return: height of a binary tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t heigtL = 0, heigtR = 0;

		heigtL = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		heigtR = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((heigtL > heigtR) ? heigtL : heigtR);
	}

	return (0);
}

/**
 * binary_tree_balance - balance of tree
 * @tree: adress of root
 *
 * Return: balance of tree
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
	{
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
	}
	return (0);
}

