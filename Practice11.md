# `const` Keyword in C++ (Easy Explanation)

`const` means **"cannot change"**.\
Anything with `const` becomes **fixed**.

------------------------------------------------------------------------

## 1️⃣ Const Variable

Value cannot change.

``` cpp
const int x = 10;
x = 20;   // ❌ Not allowed
```

------------------------------------------------------------------------

## 2️⃣ Const Function (in Class)

This function cannot change any data of the object.

``` cpp
class Demo {
public:
    int a;

    int getA() const {   // const function
        return a;        // ✔ allowed
        // a = 5;        // ❌ not allowed
    }
};
```

------------------------------------------------------------------------

## 3️⃣ Const Object

Object values cannot change.

``` cpp
const Demo obj;
obj.a = 10;   // ❌ Not allowed
```

------------------------------------------------------------------------

## 4️⃣ Const Pointer

### A. Value is Constant

You cannot change value, but pointer can move.

``` cpp
const int* p = &x;
*p = 20;   // ❌ Not allowed
p = &y;    // ✔ Allowed
```

### B. Pointer is Constant

Pointer cannot move, but value can change.

``` cpp
int* const p = &x;
p = &y;    // ❌ Not allowed
*p = 20;   // ✔ Allowed
```

------------------------------------------------------------------------

## ⭐ Simple Summary

  Type                Meaning
  ------------------- -------------------------------
  `const int x`       x cannot change
  `int get() const`   function cannot change object
  `const Demo obj`    object values cannot change
  `const int* p`      value cannot change
  `int* const p`      pointer cannot change
