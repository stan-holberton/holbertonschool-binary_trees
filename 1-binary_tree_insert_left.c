#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: the value to store in the new node
 *
 * return: pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
        binary_tree_t *insert_left;

        if (parent == NULL)
                return (NULL);

        insert_left = binary_tree_node(parent, value);
       if (insert_left == NULL)
                return (NULL);

        if (parent->left != NULL)
        {       insert_left->left = parent->left;
                parent->left->parent = insert_left;
        }
        parent->left = insert_left;

        return (insert_left);
}