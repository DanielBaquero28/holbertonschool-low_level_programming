#include "binary_trees.h"

/**
 * binary_tree_node - Creates a Binary Tree.
 * @parent: The parent node
 * @value: Data of the node
 * Return: The parent node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *root = NULL;

	root = malloc(sizeof(binary_tree_t));
	if (!root)
		return (NULL);

	root->left = NULL;
	root->right = NULL;
	root->n = value;
	root->parent = parent;

	return (root);
}
