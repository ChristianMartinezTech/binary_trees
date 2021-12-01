#include "binary_trees.h"

/**
 * binary_tree_height - Function that measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 * Return: Return 1 if node is a leaf, otherwise 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left = 0;
	size_t height_right = 0;

	if (tree == NULL)
		return (0);

	height_left = binary_tree_height(tree->left);
	height_right = binary_tree_height(tree->right);

	if (tree->left || tree->right)
	{
		if (height_left > height_right)
			return (height_left + 1);
		else
			return (height_right + 1);
	}
	return (0);
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree to measure the balance factor
 * Return: If tree is NULL, the function must return 0
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int height_left = 0;
	int height_right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL)
		height_left = -1;
	else
		height_left = binary_tree_height(tree->left);

	if (tree->right == NULL)
		height_right = -1;
	else
	{
		height_right = binary_tree_height(tree->right);
	}
	return (height_left - height_right);
}
