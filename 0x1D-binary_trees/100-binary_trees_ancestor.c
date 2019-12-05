#include "binary_trees.h"

size_t binary_tree_depth(const binary_tree_t *tree);


/**
 * binary_trees_ancestor - Finds the common ancestor between two nodes
 * @first: Node 1 that will compared with @second
 * @second: Node 2 that will compared with @first
 * Return: Ancestor between @first and @second
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t
				     *first, const binary_tree_t *second)
{
	size_t first_depth = NULL;
	size_t second_depth = NULL;

	first_depth = binary_tree_depth(first);
	second_depth = binary_tree_depth(second);

	if (!first || !second)
		return (NULL);

	if (first == second)
		return ((binary_tree_t *)first);

	if (first_depth > second_depth)
		return (binary_trees_ancestor(first->parent, second));

	if (second_depth > first_depth)
		return (binary_trees_ancestor(first, second->parent));

	return (binary_trees_ancestor(first->parent, second->parent));



}

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
