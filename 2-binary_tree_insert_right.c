#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right-child of another node
 * @parent: Pointer to the node to insert the right-child in
 * @value: Value to put in the new node
 * Return: Pointer to the created node, or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;
	binary_tree_t *temp = NULL;

	if (parent == NULL)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);


	if (parent->right == NULL)
	{
		parent->right = new_node;
		new_node->parent = parent;
		new_node->n = value;
		new_node->left = NULL;
		new_node->right = NULL;
	}
	else
	{
		temp = parent->right;
		parent->right = new_node;
		new_node->right = temp;
		new_node->left = NULL;
		new_node->parent = parent;
		new_node->n = value;
		temp->parent = new_node;
	}
	return (new_node);
}
