#include "binary_trees.h"

/**
 * binary_tree_size - Function that measures the size of a binary tree
 * @tree: Pointer to the root node of the tree to measure the size
 * Return: Return 1 if node is a leaf, otherwise 0
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size;

	size = 0;
	if (tree == NULL)
		return (0);

	size = (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
	return (size);
}

/**
 * binary_tree_is_perfect - Function that checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 * Return: If tree is NULL, the function must return 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t size_left = 0;
	size_t size_right = 0;

	if (tree == NULL)
		return (0);

	size_left = binary_tree_size(tree->left);
	size_right = binary_tree_size(tree->right);

	if (size_left == size_right)
		return (1);

	return (0);
}
