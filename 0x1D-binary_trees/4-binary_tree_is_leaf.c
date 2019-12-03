#include "binary_trees.h"

/**
 * binary_tree_is_leaf - It looks if a node is leaf or not
 * @node: Node that will be checked.
 * Return: 1 if it's a leaf node or else 0.
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{

	if (!node)
		return (0);

	else if (node->left || node->right)
		return (0);

	else
		return (1);

}
