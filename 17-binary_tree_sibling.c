#include "binary_trees.h"

/**
 * binary_tree_sibling - Function that finds the sibling of a node
 * @node: Pointer to the root node of the tree to check
 * Return: Pointer to the sibling node
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *sibling;

	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->right == node)
	{
		sibling = node->parent->left;
	}
	else
		sibling = node->parent->right;
	if (sibling == NULL)
		return (NULL);
	return (sibling);
}
