#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts node to the left of
 * a binary tree
 * @parent: pointer to node to insert left child in
 * @value: value to be placed in new left node
 * Return: if parent is NULL, returns NULL else new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);
	new_node = binary_tree_node(parent, value);
	if (parent->left == NULL)
		parent->left = new_node;
	else
	{
		new_node->left = parent->left;
		new_node->left->parent = new_node;
		parent->left = new_node;
	}
	return (new_node);
}
