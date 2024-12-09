#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * main - Point d'entrée du programme
 *
 * Description : Ce programme crée un arbre binaire et teste
 *               l'insertion d'un nœud comme enfant droit.
 * Return: Toujours 0 (Succès)
 */
int main(void)
{
	binary_tree_t *root;

	/* Création du nœud racine */
	root = binary_tree_node(NULL, 98);
	root->left = binary_tree_node(root, 12);
	root->right = binary_tree_node(root, 402);

	/* Impression de l'arbre avant insertion */
	binary_tree_print(root);
	printf("\n");

	/* Insertion d'un enfant droit dans deux cas différents */
	binary_tree_insert_right(root->left, 54);
	binary_tree_insert_right(root, 128);

	/* Impression de l'arbre après insertion */
	binary_tree_print(root);

	return (0);
}
