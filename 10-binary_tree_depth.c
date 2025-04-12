#include "binary_trees.h"

/**
 * binary_tree_depth - measure the depth of the tree
 * @tree: pointer to the node
 * Return: pointer or if tree is NULL return 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int tree_d = 0;

	if (tree == NULL)
		return (0);

	if (tree->parent)
	{
		tree_d = binary_tree_depth(tree->parent) + 1;
	}

	return (tree_d);
}
