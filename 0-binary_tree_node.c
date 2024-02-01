#include "binary_trees.h"

/**
 * binary_tree_node - create
 * @parent: parent of node
 * @value: value
 *
 * Return: adress of new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	newNode = malloc(sizeof(binary_tree_t));
	if (newNode == NULL)
		return (NULL);
	newNode->parent = parent;
	newNode->n = value;
	newNode->right = NULL;
	newNode->left = NULL;

	return (newNode);
}

