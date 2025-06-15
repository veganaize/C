C++ Notes
=========

* Unary suffix `&`
    - Means "reference to"
    - Access value _without_ `*` prefix
    - Cannot reference another object after initialization
    - Useful for function arguments, to avoid passing a copy
    - Use with `const` to also prevent value modification

* [std::stack](https://cplusplus.com/reference/stack/stack/)

      .emplace() : void
      .empty() : bool
      .pop() : void
      .push(value) : void
      .size() : size_type
      .swap() : void
      .top() : value_type&
