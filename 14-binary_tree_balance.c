#include "binary_trees.h"

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

	height_left = binary_tree_balance(tree->left);
	height_right = binary_tree_balance(tree->right);

	if (tree->left || tree->right)
	{
		if (height_left > height_right)
			(height_left += 1);
		else
			(height_right += 1);
	}
	return (height_left - height_right);
}
