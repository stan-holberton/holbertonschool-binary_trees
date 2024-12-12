#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full
 * @tree: A pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is full, 0 otherwise, or 0 if tree is NULL
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	/* If leaf node, it's full */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* If both left and right children exist, check recursively */
	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

	/* If only one child exists, it's not a full tree */
	return (0);
}
