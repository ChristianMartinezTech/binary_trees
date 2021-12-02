#include "binary_trees.h"

/**
 * binary_tree_uncle - Function that finds the uncle of a node
 * @node: Pointer to the node to find the uncle
 * Return: Pointer to the uncle node
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	// binary_tree_t *uncle;

	if (node == NULL)
		return (NULL);

	if (node->parent->parent == NULL)
		return (NULL);

	if (node->parent->parent->left == node->parent)
	{
		if (node->parent->parent->right)
			return (node->parent->parent->right);
		return (NULL);
	}
	else
	{
		if (node->parent->parent->left)
			return (node->parent->parent->left);
		return (NULL);
	}
	return (0);
}
