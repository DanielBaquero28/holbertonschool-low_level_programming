#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts all of the nodes that have at least one child
 * @tree: Tree to be checked out
 * Return: Number of the nodes with children
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_count, right_count;

	left_count = right_count = 0;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (0);

	right_count += binary_tree_nodes(tree->right) + 1;
	left_count += binary_tree_nodes(tree->left);

	return (right_count + left_count);

}
