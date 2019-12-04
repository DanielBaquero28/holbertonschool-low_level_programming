#include "binary_trees.h"

/**
 * binary_tree_postorder - Post_Order travese
 * @tree: Tree that will be traversed
 * @func: Function Pointer
 * Return: Nothing
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	if (tree->left != NULL)
		binary_tree_postorder(tree->left, func);

	if (tree->right != NULL)
		binary_tree_postorder(tree->right, func);

	func(tree->n);
}
