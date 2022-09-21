#include "binary_trees.h"
/**
 * recursive_delete - deletes all nodes of a binary tree
 * @tree: pointer to the root node of the tree to delete
 * Return: void
*/
void recursive_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		recursive_delete(tree->right);
		recursive_delete(tree->left);
		free(tree);
	}
}
/**
 * binary_tree_delete - deletes a binary tree
 * @tree: pointer to the root node of the tree to delete
 * Return: void
*/

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		recursive_delete(tree);
		tree = NULL;
	}
}
