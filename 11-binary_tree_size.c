#include "binary_trees.h"

/**
 * binary_tree_size - Function that measures the size of a binary tree
 * @tree: Pointer to the root node of the tree to measure the size
 * Return: Return 1 if node is a leaf, otherwise 0
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size;

	size=0;
	if (tree == NULL)
		return (0);
	else
		size = (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
	return (size);
}
