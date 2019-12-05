#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of @node.
 * @node: Node that will be found it's uncle
 * Return: Uncle of @node
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent_node = NULL;
	binary_tree_t *grandfather = NULL;

	if (!node)
		return (NULL);

	if (!node->parent)
		return (NULL);

	parent_node = node->parent;
	if (!parent_node->parent)
		return (NULL);

	grandfather = parent_node->parent;
	if (!grandfather->left || !grandfather->right)
		return (NULL);

	if (grandfather->left == parent_node)
		return (grandfather->right);

	return (grandfather->left);

}
