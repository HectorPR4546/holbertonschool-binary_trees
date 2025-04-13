#include "binary_trees.h"
/**
 * is_full - checks if the binary tree is full
 * @tree: pointer to the node
 * Return: pointer or if tree if NULL return 0
 */
int is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	if (tree->left && tree->right)
		return (is_full(tree->left) && is_full(tree->right));

	return (0);
}
/**
 * nodos - counts nodes with at least 1 child
 * @tree: pointer to the node
 * Return: if tree is NULL return 0
 */
size_t nodos(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	else
	{
		if (tree->left != NULL || tree->right != NULL)
		{
			return (nodos(tree->left) + nodos(tree->right) + 1);
		}
	}
	return (0);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the node
 * Return: perfec or not, tree is NULL return 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if ((nodos(tree->left) - nodos(tree->right) == 0) && (is_full(tree) == 1))
		return (1);

	return (0);
}
