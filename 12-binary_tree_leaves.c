#include "binary_trees.h"

/**
 * binary_tree_leaves - Function that counts the leaves in a binary tree
 * @tree: Pointer to the root node of the tree to count the number of leaves
 * Return: Return 1 if node is a leaf, otherwise 0
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count;

	count = 0;
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	count = (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
	return (count);
}
