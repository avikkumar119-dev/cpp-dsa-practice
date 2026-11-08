# Arrays – Day 1: Fundamentals

## 1. What is an Array?
An array is a collection of elements of the same data type stored under one variable name.

Example:
```cpp
int arr[5] = {10, 20, 30, 40, 50};
```

## 2. Array Indexing
- Array indexing starts from 0.
- First element: arr[0]
- Last element: arr[n-1]
- For an array of size 5, valid indexes are 0 to 4.

## 3. Declaration
```cpp
int numbers[5];
```

## 4. Initialization
```cpp
int numbers[5] = {10, 20, 30, 40, 50};
```

## 5. Traversing an Array
Traversal means visiting each element of an array.

```cpp
for (int i = 0; i < 5; i++) {
    cout << numbers[i] << endl;
}
```

## 6. Taking Input
```cpp
int arr[5];

for (int i = 0; i < 5; i++) {
    cin >> arr[i];
}
```

## 7. Time Complexity
- Accessing an element by index: O(1)
- Traversing the array: O(n)

## 8. Key Learnings
- Arrays store multiple values of the same type.
- Indexing starts from zero.
- Loops are used to traverse arrays.
- The last valid index is size - 1.