C++ Notes
=========

* [Operator Precendence](https://en.cppreference.com/w/cpp/language/operator_precedence.html)

* Unary suffix `&`
    - Means "reference to"
    - Access value _without_ `*` prefix
    - Cannot reference another object after initialization
    - Useful for function arguments, to avoid passing a copy
    - Use with `const` to also prevent value modification


[Algorithms](https://en.cppreference.com/w/cpp/algorithm.html)
------------

* [std::max](https://en.cppreference.com/w/cpp/algorithm/max.html)(a, b[, compare])


[Associative Containers](https://en.cppreference.com/w/cpp/container.html#Associative_containers)
------------------------

|                    | [std::map](http://en.cppreference.com/w/cpp/container/map.html) | [std::unordered_map](https://en.cppreference.com/w/cpp/container/unordered_map.html) <sup>C++11</sup>
|--------------------|-----------------------------------------------------------------|---------------------------
| `m[key]`           | O(log n)                                                        | O(1) average, O(n) worst
| `.at(key)`         | O(log n)                                                        | O(1) average, O(n) worst
| `.empty()`         | O(1)                                                            | O(1)
| `.erase(position)` | `position`: Amoritized O(1); `key`: O(log n)                    | `position`: O(1) average, O(n) worst; `key`: O(key) average, O(n) worst
| `.find(key)`       | O(log n)                                                        | O(1) average, O(n) worst
| `.insert(value)`   | [cppreference](http://en.cppreference.com/w/cpp/container/map/insert.html#Complexity) | [cppreference](https://en.cppreference.com/w/cpp/container/unordered_map/insert.html#Complexity)
| `.size()`          | O(1)                                                            | O(1)

* std::multimap, std::multiset
* [std::pair](https://en.cppreference.com/w/cpp/utility/pair.html)
```C++
      .first
      .second
      std::make_pair(a, b)  // types are deduced (unlike pair<> constructor)
```

[Container Adapters](https://en.cppreference.com/w/cpp/container.html#Container_adaptors)
--------------------

* [std::priority_queue](https://en.cppreference.com/w/cpp/container/priority_queue.html)
```C++
      #include <queue>
      std::priority_queue<int> max_heap;
      std::priority_queue<int, std::vector<int>, std::greater<int> > min_heap;

      .pop() : void             // O(lg n) time
      .push(value) : void       // O(lg n) time
      .size() : size_t          // O(1) time
      .top() : const_reference  // peek at top element (largest by default); O(1) time
```
* std::queue
* [std::stack](https://en.cppreference.com/w/cpp/container/stack.html)
```C++
      .emplace() : void
      .empty() : bool
      .pop() : void
      .push(value) : void
      .size() : size_type
      .swap() : void
      .top() : value_type&
```

[Sequence Containers](https://en.cppreference.com/w/cpp/container.html#Sequence_containers)
---------------------

* std::deque
* std::list
```C++
      --linked_list.end()  // Iterator to last element
      .splice(position, list[, it_first[, it_last]])  // O(1) if `list` is same list; Optimal element reordering
```
* [std::string](https://en.cppreference.com/w/cpp/string.html), [std::wstring](https://en.cppreference.com/w/cpp/string.html), [std::basic_string](https://en.cppreference.com/w/cpp/string/basic_string.html)
* [std::vector](https://en.cppreference.com/w/cpp/container/vector.html)


[Utility Libraries](https://en.cppreference.com/w/cpp/utility.html)
-------------------

* [std::numeric_limits](https://en.cppreference.com/w/cpp/types/numeric_limits.html)
```C++
      #include <limits>
      std::numeric_limits<T>::min()
      std::numeric_limits<T>::max()
```
