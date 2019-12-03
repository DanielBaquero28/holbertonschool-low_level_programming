#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right child of the root node
 * @parent: The parent node
 * @value: The data of the node
 * Return: The parent node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{

	binary_tree_t *new_node = NULL;
	binary_tree_t *tmp = NULL;

	if (!parent)
		return (NULL);
	new_node = binary_tree_node(parent, value);
	if (!new_node)
		return (NULL);

	tmp = parent->right;
	parent->right = new_node;
	new_node->right = tmp;
	if (tmp != NULL)
		tmp->parent = new_node;

	return (new_node);
}
