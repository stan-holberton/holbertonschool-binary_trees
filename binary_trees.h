#ifndef BINARY_TREES_H
#define BINARY_TREES_H

#include <stdlib.h>

/**
 * struct binary_tree_s - Nœud d'un arbre binaire
 * @n: Entier stocké dans le nœud
 * @parent: Pointeur vers le nœud parent
 * @left: Pointeur vers le nœud enfant gauche
 * @right: Pointeur vers le nœud enfant droit
 */
struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;

/* DECALRATION DES PROTOTYPES ICI */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);

void binary_tree_print(const binary_tree_t *tree);

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);

#endif /* BINARY_TREES_H */
