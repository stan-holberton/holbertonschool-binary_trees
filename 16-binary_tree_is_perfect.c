#include "binary_trees.h"

/**
 * binary_tree_height - Mesure la hauteur d'un arbre binaire
 * @tree: Pointeur vers le nœud racine de l'arbre dont on mesure la hauteur
 *
 * Return: 0 si l'arbre est NULL, sinon la hauteur de l'arbre
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		left_height = binary_tree_height(tree->left);
	if (tree->right)
		right_height = binary_tree_height(tree->right);

	return ((left_height > right_height ? left_height : right_height) + 1);
}

/**
 * is_perfect_recursive - Vérifie récursivement si un arbre est parfait
 * @tree: Pointeur vers le nœud racine de l'arbre à vérifier
 * @height: Hauteur totale de l'arbre
 * @level: Niveau actuel du nœud
 *
 * Return: 1 si l'arbre est parfait, sinon 0
 */
int is_perfect_recursive(const binary_tree_t *tree,
			 size_t height, size_t level)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (height == level + 1);

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	return (is_perfect_recursive(tree->left, height, level + 1) &&
		is_perfect_recursive(tree->right, height, level + 1));
}

/**
 * binary_tree_is_perfect - Vérifie si un arbre binaire est parfait
 * @tree: Pointeur vers le nœud racine de l'arbre à vérifier
 *
 * Return: 1 si l'arbre est parfait, sinon 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height;

	if (tree == NULL)
		return (0);

	height = binary_tree_height(tree);

	return (is_perfect_recursive(tree, height, 0));
}
