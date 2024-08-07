#include "binary_trees.h"

/**
 * binary_tree_insert_right - aa
 * @parent: aaa
 * @value: aaa
 * Return: aaa
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	if (parent == NULL)
		return (NULL);
	newnode = malloc(sizeof(binary_tree_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = value;
	newnode->parent = parent;
	if (parent->right != NULL)
		newnode->right = parent->right;
	parent->right = newnode;
	return (newnode);
}
