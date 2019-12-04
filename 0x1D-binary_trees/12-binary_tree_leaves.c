#include "binary_trees.h"

/**
 * binary_tree_leaves - Finds recursively the number of leaves there are.
 * @tree: Tree from which we'll find the number of leaves.
 * Return: Number of leaves.
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_leaves, right_leaves;

	left_leaves = right_leaves = 0;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	if (tree->left)
		left_leaves += binary_tree_leaves(tree->left);

	if (tree->right)
		right_leaves += binary_tree_leaves(tree->right);

	return (left_leaves + right_leaves);


}
