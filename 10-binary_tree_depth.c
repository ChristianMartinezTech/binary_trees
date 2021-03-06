#include "binary_trees.h"

/**
 * binary_tree_depth - Function that measures the depth of a node
 * in a binary tree
 * @tree: Pointer to the root node of the tree to measure the depth
 * Return: Return 1 if node is a leaf, otherwise 0
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);

	depth = binary_tree_depth(tree->parent);

	if (tree->parent != NULL)
	{
		return (depth + 1);
	}
	else
		return (depth);

	return (0);
}
