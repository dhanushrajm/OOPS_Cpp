#include <stdio.h>
#include <stdlib.h>
 
// structure of a node
struct node
{
    int data;
    struct node *left;
    struct node *right;
    struct node* parent;
};
 
// globally initialized root pointer
struct node *root = NULL;
 
// function prototyping
struct node *create_node(int);
void insert(int);
int search(int);
struct node *delete (struct node *, int);
struct node* minValue(struct node* );
struct node *smallest_node(struct node *);
int get_data();

int main()
{
    int userChoice;
    int userActive = 'Y';
    int data;
    struct node* result = NULL;
	
    while (userActive == 'Y' || userActive == 'y')
    {
        printf("\n\n------- Binary Search Tree ------\n");
        printf("\n1. Insert");
        printf("\n2. Search");
        printf("\n3. Delete");
        printf("\n4. Exit");
 
        printf("\n\nEnter Your Choice: ");
        scanf("%d", &userChoice);
        printf("\n");
 
        switch(userChoice)
        {
            case 1:
                data = get_data();
                insert(data);
                break;
            
            case 2:
                data = get_data();
                if (search(data) == 1)
                {
                    printf("\nData was found!\n");
                }
                else
                {
                    printf("\nData does not found!\n");
                }
                break;
            
            case 3:
                data = get_data();
                root = delete(root, data);
                printf("\nNode deleted\n");
                break;
 
            case 4:
                printf("\n\nProgram was terminated\n");
                break;
 
            default:
                printf("\n\tInvalid Choice\n");
                break;
        }
 
        printf("\n__________\nDo you want to continue? ");
        fflush(stdin);
        scanf(" %c", &userActive);
    }
 
    return 0;
}
 
// creates a new node
struct node *create_node(int data)
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
 
    if (new_node == NULL)
    {
        printf("\nMemory for new node can't be allocated");
        return NULL;
    }
 
    new_node->data = data;
    new_node->left = NULL;
    new_node->right = NULL;
	new_node->parent = NULL;
	
    return new_node;
}
 
// inserts the data in the BST
void insert(int data)
{
    struct node *new_node = create_node(data);
 
    if (new_node != NULL)
    {
        // if the root is empty then make a new node as the root node
        if (root == NULL)
        {
            root = new_node;
            printf("\n* node having data %d was inserted\n", data);
            return;
        }
 
        struct node *temp = root;
        struct node *prev = NULL;
 
        // traverse through the BST to get the correct position for insertion
        while (temp != NULL)
        {
            prev = temp;
            if (data > temp->data)
            {
                temp = temp->right;
            }
            else
            {
                temp = temp->left;
            }
        }
 
        // found the last node where the new node should insert
        if (data > prev->data)
        {
            prev->right = new_node;
        }
        else
        {
            prev->left = new_node;
        }
 
        printf("\nNode having data %d was inserted\n", data);
    }
}

// search the given key node in BST
int search(int key)
{
    struct node *temp = root;
 
    while (temp != NULL)
    {
        if (key == temp->data)
        {
            return 1;
        }
        else if (key > temp->data)
        {
            temp = temp->right;
        }
        else
        {
            temp = temp->left;
        }
    }
    return 0;
}

struct node* minValue(struct node* node)
{
	struct node* current = node;

	while (current->left != NULL) 
	{
		current = current->left;
	}
	return current;
}

struct node *smallest_node(struct node *root)
{
    struct node *curr = root;
    while (curr != NULL && curr->left != NULL)
   {
        curr = curr->left;
    }
    return curr;
}

// deletes the given key node from the BST
struct node *delete (struct node *root, int key)
{
    if (root == NULL)
    {
        return root;
    }
    if (key < root->data)
    {
        root->left = delete (root->left, key);
    }
    else if (key > root->data)
    {
        root->right = delete (root->right, key);
    }
    else
    {
        if (root->left == NULL)
        {
            struct node *temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            struct node *temp = root->left;
            free(root);
            return temp;
        }
        struct node *temp = smallest_node(root->right);
        root->data = temp->data;
        root->right = delete (root->right, temp->data);
    }
    return root;
 
}
 
// getting data from the user
int get_data()
{
    int data;
    printf("\nEnter Data: ");
    scanf("%d", &data);
    return data;
}
