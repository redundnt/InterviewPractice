Basic Facts about Common Data Structures and Algorithms
=======================================================
## Terms and Conventions
`k` refers to a __key__ or __value__. `n` refers to an integer, often an index. `S` refers to the 
dynamic set that we are working on (clear from context). `x` refers to a node of some sort 
(the container for `k`).

## Data Structures

### Linked Lists
#### Basic Design
A `linked list` is an implementation of the List API that consists of `Node`
objects that contain, minimally, a `key` or `value` field and a pointer `next` to
another `Node` object. These may also contain a second pointer to a previous Node,
which results in a doubly linked list.
#### Operation Run Times
1. `PREPEND(S,x)`: O(1)
2. `APPEND(S, x)`: O(n) (O(1) w/ tail pointer)
3. `INSERT(S, k, n)`: O(1) if pointer to previous node is already found OR if list is doubly linked. O(n) otherwise
4. `SEARCH(S, k)`: O(n)
5. `DELETE(S, x)`: O(1) w/ doubly linked list OR O(n) for singly linked list

### Array List
#### Basic Design
An `array list` is an implementation of the List API that consists of an array of objects. 
This is more memory efficient than a linked list
#### Operation Run Times
1. `PREPEND(S,x)`: O(n)
2. `APPEND(S,x)`:  O(1) if space exists
3. `INSERT(S, i, x)`: O(n)
4. `SEARCH(S, x)`:    UNSORTED: O(n), SORTED: O(lg n)
5. `DELETE(S, x)`:    O(n)

### Linked Binary Tree
#### Basic Design
Comprised of `Node` objects. Each contains a `value` field as well as `left`, `right` fields 
which point to other `Node` objects. If the possible values of a node have a total ordering then
we can have a __sorted__ tree where items are added in a way such that an __inorder__ traversal will
return the elements in total ordering.

#### Operation Run Times
1. `INSERT(S,x)`: O(lg n)
2. 
### Array Based Binary Tree
### General Trees
#### Basic Design


### Stacks
#### Basic Design


### Queues
#### Basic Design


### Vectors/ArrayLists
#### Basic Design


### Hash Tables
#### Basic Design


## Algorithms

### BFS

### DFS

### Binary Search

### Merge Sort

### Quick Sort

### Tree Insert

### Tree Find
