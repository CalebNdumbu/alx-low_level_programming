# Linked List Functions

## 0. Print List
Write a function that prints all the elements of a `listint_t` list.

**Prototype:** `size_t print_listint(const listint_t *h);`

**Return:** The number of nodes

**Format:** See example

You are allowed to use `printf`.

## 1. List Length
Write a function that returns the number of elements in a linked `listint_t` list.

**Prototype:** `size_t listint_len(const listint_t *h);`

## 2. Add Node
Write a function that adds a new node at the beginning of a `listint_t` list.

**Prototype:** `listint_t *add_nodeint(listint_t **head, const int n);`

**Return:** The address of the new element, or `NULL` if it failed

## 3. Add Node at the End
Write a function that adds a new node at the end of a `listint_t` list.

**Prototype:** `listint_t *add_nodeint_end(listint_t **head, const int n);`

**Return:** The address of the new element, or `NULL` if it failed

## 4. Free List
Write a function that frees a `listint_t` list.

**Prototype:** `void free_listint(listint_t *head);`

## 5. Free
Write a function that frees a `listint_t` list and sets the head to `NULL`.

**Prototype:** `void free_listint2(listint_t **head);`

## 6. Pop
Write a function that deletes the head node of a `listint_t` linked list and returns the head node’s data (`n).

**Prototype:** `int pop_listint(listint_t **head);`

If the linked list is empty, return `0`.

## 7. Get Node at Index
Write a function that returns the nth node of a `listint_t` linked list.

**Prototype:** `listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);`

Where index is the index of the node, starting at 0. If the node does not exist, return `NULL`.

## 8. Sum List
Write a function that returns the sum of all the data (`n`) of a `listint_t` linked list.

**Prototype:** `int sum_listint(listint_t *head);`

If the list is empty, return `0`.

## 9. Insert
Write a function that inserts a new node at a given position.

**Prototype:** `listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);`

Where `idx` is the index of the list where the new node should be added (index starts at 0).

**Returns:** The address of the new node, or `NULL` if it failed.

If it is not possible to add the new node at index `idx`, do not add the new node and return `NULL`.

## 10. Delete at Index
Write a function that deletes the node at index `index` of a `listint_t` linked list.

**Prototype:** `int delete_nodeint_at_index(listint_t **head, unsigned int index);`

Where `index` is the index of the node that should be deleted (index starts at 0).

**Returns:** `1` if it succeeded, `-1` if it failed.

## 11. Reverse List
Write a function that reverses a `listint_t` linked list.

**Prototype:** `listint_t *reverse_listint(listint_t **head);`

**Returns:** A pointer to the first node of the reversed list.

You are not allowed to use more than 1 loop and are not allowed to use `malloc`, `free`, or arrays. You can only declare a maximum of two variables in your function.

## 12. Print (Safe Version)
Write a function that prints a `listint_t` linked list.

**Prototype:** `size_t print_listint_safe(const listint_t *head);`

**Returns:** The number of nodes in the list.

This function can print lists with a loop. You should go through the list only once. If the function fails, exit the program with status `98`.

Output format: See example.

## 13. Free (Safe Version)
Write a function that frees a `listint_t` list.

**Prototype:** `size_t free_listint_safe(listint_t **h);`

This function can free lists with a loop. You should go through the list only once.

**Returns:** The size of the list that was freed.

The function sets the head to `NULL`.

## 14. Find the Loop
Write a function that finds the loop in a `listint_t` linked list.

**Prototype:** `listint_t *find_listint_loop(listint_t *head);`

**Returns:** The address of the node where the loop starts, or `NULL` if there is no loop.

You are not allowed to use `malloc`, `free`, or arrays. You can only declare a maximum of two variables in your function.

