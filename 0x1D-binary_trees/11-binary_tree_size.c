#include "binary_trees.h"

/**
 * binary_tree_size - Finds the size of the tree
 * @tree: Tree from which we'll find the size
 * Return: Size of the tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_sub, right_sub;

	if (!tree)
		return (0);

	right_sub = left_sub = 0;

	if (tree->left)
		left_sub = binary_tree_size(tree->left);

	if (tree->right)
		right_sub = binary_tree_size(tree->right);

	return (left_sub + right_sub + 1);

}
