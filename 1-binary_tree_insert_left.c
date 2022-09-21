#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 * Return: pointer to the created node
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node, *temp;

	new_node = (binary_tree_t *) malloc(sizeof(binary_tree_t));

	if (new_node != NULL && parent != NULL)
	{
		new_node->parent = parent;
		new_node->n = value;
		new_node->right = NULL;

		if (parent->left != NULL)
		{
			temp = parent->left;
			parent->left = new_node;
			temp->parent = new_node;
			new_node->left = temp;
		}
		else
		{
			parent->left = new_node;
			new_node->left = NULL;
		}
		return (new_node);
	}
	free(new_node);
	return (NULL);
}
