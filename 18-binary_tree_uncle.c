#include "binary_trees.h"

/**
 * binary_tree_uncle - Function that finds the uncle of a node
 * @node: Pointer to the node to find the uncle
 * Return: Pointer to the uncle node
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle;

	if (node == NULL)
		return (NULL);

	if (node->parent->parent == NULL)
		return (NULL);

	if (node->parent->parent->left == node->parent)
	{
		uncle = node->parent->parent->right;
		if (!uncle)
			return (NULL);
		return (uncle);
	}
	else
	{
		uncle = node->parent->parent->left;
		if (!uncle)
			return (NULL);
		return (uncle);
	}
	return (0);
}
