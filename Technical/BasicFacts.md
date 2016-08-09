Basic Facts about Common Data Structures and Algorithms
=======================================================
## Terms and Conventions
`k` refers to a __key__ or __value__. `n` refers to an integer, often an index. `S` refers to the 
dynamic set that we are working on (clear from context). `x` refers to a pointer of some sort, usually to
a node containing a key `k`.

## Data Structures

### Linked Lists
#### Basic Design
A `linked list` is an implementation of the List API that consists of `Node`
objects that contain, minimally, a `key` or `value` field and a pointer `next` to
another `Node` object. These may also contain a second pointer to a previous Node,
which results in a doubly linked list.
#### Operation Run Times
1. `PREPEND(S, x)`: O(1)
2. `APPEND(S, x)`: 
  *O(n) with no tail pointer
  *O(1) w/ tail pointer
3. `INSERT(S, x, n)`: 
  * O(1) if pointer to previous node is already found OR if list is doubly linked. 
  * O(n) otherwise
4. `SEARCH(S, k)`: O(n)
5. `DELETE(S, x)`: 
  * O(1) for doubly linked list 
  * O(n) for singly linked list
6. `PREDECESSOR(S, x)`: 
  * O(n): unsorted OR singly linked
  * O(1) if sorted AND doubly linked
7. `SUCCESSOR(S, x)`: 
  * O(1) if sorted
  * O(n) otherwise
8. `MAXIMUM(S)`: 
  * O(n) if unsorted OR no tail pointer
  * O(1) if sorted AND tail pointer
9. `MINIMUM(S)`:
  * O(1) if sorted
  * O(n) if unsorted


### Array List
#### Basic Design
An `array list` is an implementation of the List API that consists of an array of objects. 
This is more memory efficient than a linked list
#### Operation Run Times
1. `PREPEND(S, k)`: O(n)
2. `APPEND(S,x)`:  O(1) if space exists
3. `INSERT(S, i, x)`: O(n)
4. `SEARCH(S, x)`:    UNSORTED: O(n), SORTED: O(lg n)
5. `DELETE(S, x)`:    O(n)

### Stack

#### Basic Design
LIFO. Can use array or linked list (singly with special pointer to tail - 1)

#### Operation Run times
1. `PUSH(S, x)`: O(1)
2. `POP(S)`:     O(1)
3. `EMPTY(S)`: O(1)

### Queue
#### Basic Design
FIFO. Can use circular array or doubly linked list.

#### Operation Run Times
1. `ENQUEUE(S, x)`: O(1)
2. `DEQUEUE(S, x)`: O(1)
3. `EMPTY(S)`: O(1)

### Linked Binary Tree
#### Basic Design
Comprised of `Node` objects. Each contains a `value` field as well as `left`, `right` fields 
which point to other `Node` objects. If the possible values of a node have a total ordering then
we can have a __sorted__ tree where items are added in a way such that an __inorder__ traversal will
return the elements in total ordering.

#### Operation Run Times
1. `INSERT(S, x)`: O(lg n)
2. `DELETE(S, x)`: O(1)
3. `SEARCH(S, k)`: O(lg n)
4. `MINIMUM(S)`: O(1)
5. `MAXIMUM(S)`: O(lg n)

### Array Based Binary Tree
### General Trees
#### Basic Design


### Hash Tables
#### Basic Design
Supports operations: __SEARCH__, __DELETE__, and __INSERT__.

__Direct-address Tables:__ Given keys in [0..m-1] with guaranteed unique keys we can store
pointers to `(key, satellite data)` tuples.

__Hash functions:__ A function *h(k)* that maps a key to Z<sub>m</sub>. To handle collisions,
use __chaining__ or __open addressing__.

__Chaining collision resolution__: In table _T_, each box _T[h(k)]_ points to a linked list that contains elements
that hash to _h(k)_. 

1. `INSERT(S, x)`: 
  * __chaining__: O(1)
  * __direct-address__: O(1)
  * __open-addressing__: ??? 
2. `DELETE(S, x)`:
  * __chaining__: O(1)
  * __direct-address__: O(1)
  * __open-addressing__: ???
3. `SEARCH(S, k)`:
  * __chaining__: WORST CASE - _O(n)_, AVERAGE - _O(n/k)_ with _n_ the number of hashed values, _m_ the total slots
  * __direct-address__: O(1)
  * __open-addressing__: ???

## Algorithms

### BFS

### DFS

### Binary Search

### Merge Sort

### Quick Sort

### Tree Insert

### Tree Find
