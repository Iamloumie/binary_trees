#include "binary_trees.h"

/**
 * binary_tree_preoder - prints the element of tree uing pre-order trial
 * @tree: tree to go through
 * @func: the function to use
 * Return: Nothing
 */
void binary_tree_preoder(const binary_tree_t *tree, void(*func)(int))
{
    if (tree == NULL || func == NULL)
    {
        return;
    }
    else
    {
        func(tree->n);
        binary_tree_preoder(tree->left, func);
        binary_tree_preoder(tree->right, func);
    }
}
