#include "binary_trees.h"

/**
 * binary_tree_insert_right - add a node as the right child of the given parent
 *	if parent already have a right child take it's place and the old one became
 *	the right child of the new one
 * @parent: a pointer to the parent of the node to create
 * @value: the value to put in the new node
 * Return: a pointer to the newnode, otherwise NULL.
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
	newnode->right = parent->right;
	newnode->left = NULL;
	if (parent->right != NULL)
		newnode->right = parent->right;
	parent->right = newnode;
	return (newnode);
}
