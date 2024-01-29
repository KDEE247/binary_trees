#include "binary_trees.h"
/**
 * binary_tree_node - Creates the Binary Tree Node.
 * @parent: Ptr to the Parent of the Node Created.
 * @value: The Value to Assign in the New Node.
 * Return: If Error Occurs: NULL; else: Pter to New Node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	return (new);
}
