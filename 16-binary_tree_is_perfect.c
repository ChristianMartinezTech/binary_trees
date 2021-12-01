#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Function that checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 * Return: If tree is NULL, the function must return 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int depht = 0;
	
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		binary_tree_depht(tree);

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	if (tree->left && tree->right)
	{
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	}
	else
		return (0);
}
