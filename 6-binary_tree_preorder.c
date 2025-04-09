#include "binary_trees.h"

/**
 * binary_tree_preorder - go using pre-order traversal
 * @tree: pointer of the tree to traverse
 * @func: pointer to call for each node
 * Return: return node or if NULL do nothing
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (func == NULL)
		return;

	if (tree == NULL)
		return;

	if (tree != NULL)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
