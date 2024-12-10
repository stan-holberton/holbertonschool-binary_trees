#include "binary_trees.h"

/**
 * binary_tree_preorder - Traverse un arbre binaire en mode préfixe.
 *
 * @tree: Pointeur vers la racine de l'arbre à parcourir.
 * @func: Pointeur vers une fonction à appeler pour chaque nœud.
 *        La valeur du nœud est passée en paramètre à cette fonction.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n); /* Appelle la fonction sur la valeur du nœud actuel */
	binary_tree_preorder(tree->left, func); /* Parcours du sous-arbre gauche */
	binary_tree_preorder(tree->right, func); /* Parcours du sous-arbre droit */
}
