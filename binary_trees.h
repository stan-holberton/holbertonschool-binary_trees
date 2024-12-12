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

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);

int binary_tree_is_leaf(const binary_tree_t *node);

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));

size_t binary_tree_depth(const binary_tree_t *tree);

size_t binary_tree_leaves(const binary_tree_t *tree);

int binary_tree_balance(const binary_tree_t *tree);

void binary_tree_delete(binary_tree_t *tree);

int binary_tree_is_root(const binary_tree_t *node);

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));

size_t binary_tree_height(const binary_tree_t *tree);

size_t binary_tree_size(const binary_tree_t *tree);

size_t binary_tree_nodes(const binary_tree_t *tree);

int binary_tree_is_full(const binary_tree_t *tree);

int is_perfect_recursive(const binary_tree_t *tree, size_t height, size_t level);

int binary_tree_is_perfect(const binary_tree_t *tree);

binary_tree_t *binary_tree_sibling(binary_tree_t *node);

#endif /* BINARY_TREES_H */
