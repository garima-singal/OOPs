# Constructor Initialization List (Easy Explanation)

Constructor Initialization List is used to **initialize class
variables** before the constructor body runs.

------------------------------------------------------------------------

## 🌟 What is Initialization List?

Syntax:

``` cpp
ClassName() : a(10), b(20) {
    // constructor body
}
```

------------------------------------------------------------------------

## ⭐ Why Use Initialization List?

1.  Faster than assigning inside constructor\
2.  Required for:
    -   `const` variables\
    -   reference variables\
    -   base class constructor\
3.  Initializes values only once

------------------------------------------------------------------------

## 1️⃣ Normal Initialization (Inside Constructor)

``` cpp
class Demo {
    int x;
public:
    Demo() {
        x = 10;   // assigned here
    }
};
```

------------------------------------------------------------------------

## 2️⃣ Initialization List (Better Way)

``` cpp
class Demo {
    int x;
public:
    Demo() : x(10) {   // initialized here
    }
};
```

------------------------------------------------------------------------

## 3️⃣ Const Variables Must Use Initialization List

``` cpp
class Test {
    const int a;
public:
    Test() : a(5) {}   // ✔ correct
    // Test() { a = 5; }  ❌ error
};
```

------------------------------------------------------------------------

## 4️⃣ Reference Variables Must Use Initialization List

``` cpp
class Demo {
    int &ref;
public:
    Demo(int &x) : ref(x) {}   // ✔ correct
};
```

------------------------------------------------------------------------

## 5️⃣ Initializing One Object Inside Another

``` cpp
class A {
public:
    A(int x) {}
};

class B {
    A obj;
public:
    B() : obj(10) {}   // calling A's constructor
};
```

------------------------------------------------------------------------

## ⭐ Simple Summary Table

  Case                          Needs Initialization List?
  ----------------------------- ----------------------------
  Normal variables              Optional
  const variable                ✔ Required
  Reference variable            ✔ Required
  Object member                 ✔ Better
  Base class constructor call   ✔ Required
