#include "binary_trees.h"

/**
 * binary_tree_is_root - Looks if the node is a root or not
 * @node: The node that will be checked
 * Return: 1 if it's a root node or else 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{

	if (!node)
		return (0);

	else if (node->parent != NULL)
		return (0);

	else
		return (1);

}
