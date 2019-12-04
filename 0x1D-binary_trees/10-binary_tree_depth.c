#include "binary_trees.h"

/**
 * binary_tree_depth - Finds the depth of a node
 * @tree: Tree that will be reviewed.
 * Return: Depth of a node
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{

	if (!tree)
		return (0);

	if (tree->parent)
		return (binary_tree_depth(tree->parent) + 1);

	return (0);

}
