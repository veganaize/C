C++ Notes
=========

* Unary suffix `&`
    - Means "reference to"
    - Access value _without_ `*` prefix
    - Cannot reference another object after initialization
    - Useful for function arguments, to avoid passing a copy
    - Use with `const` to also prevent value modification
