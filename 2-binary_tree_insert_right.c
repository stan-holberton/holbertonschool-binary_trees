#include "binary_trees.h"

/**
 * binary_tree_insert_right - Insère un nœud
 * comme enfant droit d'un autre nœud
 * @parent: Pointeur vers le nœud parent
 * @value: Valeur à stocker dans le nouveau nœud
 *
 * Return: Pointeur vers le nouveau nœud, ou NULL en cas d'échec
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	/* Créer un nouveau nœud */
	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);

	/* Si un enfant droit existe déjà, le déplacer */
	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}

	/* Mettre à jour le parent pour pointer sur le nouveau nœud */
	parent->right = new_node;

	return (new_node);
}
