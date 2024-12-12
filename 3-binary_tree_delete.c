#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_delete - Supprime un arbre binaire
 * @tree: Pointeur vers le nœud racine de l'arbre à supprimer
 *
 * Description: La fonction supprime récursivement chaque nœud de l'arbre
 * en commençant par les feuilles.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	/* Supprimer les sous-arbres gauche et droit de manière récursive */
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	/* Libérer la mémoire du nœud actuel */
	free(tree);
}
