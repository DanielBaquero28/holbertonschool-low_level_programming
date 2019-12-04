#include "binary_trees.h"

/**
 * binary_tree_height - Finds the height of a tree
 * @tree: Tree from which the height will be found
 * Return: Depth of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t hleft_sub, hright_sub;

	if (!tree)
		return (0);

	hleft_sub = 0;
	hright_sub = 0;

	if (tree->left)
		hleft_sub = binary_tree_height(tree->left) + 1;
	if (tree->right)
		hright_sub = binary_tree_height(tree->right) + 1;

	if (hleft_sub > hright_sub)
		return (hleft_sub);
	return (hright_sub);
}
