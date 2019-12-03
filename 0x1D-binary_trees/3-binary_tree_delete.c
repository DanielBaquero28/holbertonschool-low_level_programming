#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes a Binary Tree
 * @tree: Tree that will be deleted
 * Return: Nothing
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	free(tree);
}
