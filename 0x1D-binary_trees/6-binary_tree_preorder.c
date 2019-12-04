#include "binary_trees.h"

/**
 * binary_tree_preorder - Pre-order traverse
 * @tree: Tree to be traversed
 * @func: Pointer Function
 * Return: Nothing
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{

	const binary_tree_t *tmp;
	tmp = tree;

	if (!tree || !func)
		return;
	func(tree->n);

	if (tmp->left != NULL)
		binary_tree_preorder(tmp->left, func);
	if (tmp->right != NULL)
		binary_tree_preorder(tmp->right, func);

}
