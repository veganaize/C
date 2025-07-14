C++ Notes
=========

* Unary suffix `&`
    - Means "reference to"
    - Access value _without_ `*` prefix
    - Cannot reference another object after initialization
    - Useful for function arguments, to avoid passing a copy
    - Use with `const` to also prevent value modification


[Associative Containers](https://en.cppreference.com/w/cpp/container.html#Associative_containers)
------------------------

|                    | [std::map](http://en.cppreference.com/w/cpp/container/map.html) | [std::unordered_map](https://en.cppreference.com/w/cpp/container/unordered_map.html) _(C++11)_
|--------------------|-----------------------------------------------------------------|---------------------------
| `.at(key)`         | O(log n)                                                        | O(1) average, O(n) worst
| `.empty()`         | O(1)                                                            | O(1)
| `.erase(position)` | position: Amoritized O(1); key: O(log n)                        | position: O(1) average, O(n) worst; key: O(key) average, O(n) worst
| `.find(key)`       | O(log n)                                                        | O(1) average, O(n) worst
| `.insert(value)`   | [cppreference](http://en.cppreference.com/w/cpp/container/map/insert.html#Complexity) | [cppreference](https://en.cppreference.com/w/cpp/container/unordered_map/insert.html#Complexity)
| `.operator[key]`   | O(log n)                                                        | O(1) average, O(n) worst
| `.size()`          | O(1)                                                            | O(1)

* std::multimap, std::multiset
* [std::pair](https://cplusplus.com/reference/utility/pair/)

      .first
      .second


[Container Adapters](https://en.cppreference.com/w/cpp/container.html#Container_adaptors)
--------------------

* std::priority_queue
* std::queue
* [std::stack](https://cplusplus.com/reference/stack/stack/)

      .emplace() : void
      .empty() : bool
      .pop() : void
      .push(value) : void
      .size() : size_type
      .swap() : void
      .top() : value_type&


[Sequence Containers](https://en.cppreference.com/w/cpp/container.html#Sequence_containers)
---------------------

* std::deque
* std::list
* std::string, std::wstring, std::basic_string
* [std::vector](https://cplusplus.com/reference/vector/vector/)
