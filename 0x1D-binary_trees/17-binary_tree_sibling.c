#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds siblings of @node
 * @node: Node that will be checked if it has a siblings and returns it
 * Return: Sibling of @node
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *temp_parent = NULL;

	if (!node || !node->parent)
		return (NULL);

	temp_parent = node->parent;
	if (!temp_parent->left || !temp_parent->right)
		return (NULL);
	if (temp_parent->left == node)
		return (temp_parent->right);
	return (temp_parent->left);
}
