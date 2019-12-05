#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if the tree is full or not
 * @tree: Tree that will be reviewed
 * Return: 0 if it's not full or else 1 if it is.
 */

int binary_tree_is_full(const binary_tree_t *tree)
{

	if (!tree)
		return (0);

	if (!tree->right && !tree->left)
		return (1);

	if (tree->left && tree->right)
		return(binary_tree_is_full(tree->left) &&
		       binary_tree_is_full(tree->right));

	return (0);

}
