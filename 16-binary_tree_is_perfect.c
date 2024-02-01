#include "binary_trees.h"

/**
 * powerr - power recursive
 * @x: number
 * @po: number
 * Return: x to the power of po
 */

int powerr(int x, int po)
{
	if (po < 0)
		return (-1);
	if (po == 0)
		return (1);
	else
		return (x * powerr(x, po - 1));
}

/**
 * binary_tree_height - heigt of a binary tree
 * @tree: adress of root
 *
 * Return: heigt of a binary tree
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
 * binary_tree_size - size of binary tree
 * @tree: adress of root
 *
 * Return: size of binary tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}

/**
 * binary_tree_is_perfect - binary tree is perfect or no
 * @tree: adress of root
 *
 * Return: binary tree is perfect or no
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t heigt = 0;
	size_t sizee = 0;
	size_t power_re = 0;

	if (!tree)
		return (0);

	if (!tree->right && !tree->left)
		return (1);

	heigt = binary_tree_height(tree);
	sizee = binary_tree_size(tree);

	power_re = (size_t) powerr(2, heigt + 1);

	return (power_re - 1 == sizee);
}
