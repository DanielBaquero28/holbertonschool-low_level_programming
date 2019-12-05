#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Checks if the @tree is a perfect tree
 * @tree: Tree that will be reviewed if it is perfect or not.
 * Return: 0 if it's not perfect or else 1
 */

size_t binary_tree_height(const binary_tree_t *tree);
int binary_tree_balance(const binary_tree_t *tree);
int binary_tree_is_full(const binary_tree_t *tree);

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (binary_tree_is_full(tree) && binary_tree_balance(tree) == 0)
		return (1);
	else
		return (0);

}

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

/**
 * binary_tree_balance - Measures balance factor of a binary tree.
 * @tree: Tree to be reviewed
 * Return: Balance factor of a binary tree
 */

int binary_tree_balance(const binary_tree_t *tree)
{

	int left_subtree, right_subtree;

	left_subtree = right_subtree = 0;

	if (!tree)
		return (0);

	if (tree->left)
		left_subtree = binary_tree_height(tree->left) + 1;

	if (tree->right)
		right_subtree = binary_tree_height(tree->right) + 1;

	return (left_subtree - right_subtree);
}

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
