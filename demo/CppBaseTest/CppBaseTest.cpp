#include <iostream>
#include "explicit.hpp"
#include "this_pointer.hpp"
#include "static_assert.hpp"
#include "static_inline.hpp"
#include "static_cast.hpp"
#include "istream.hpp"
#include "operator.hpp"
#include "template.hpp"
#include "data_type_convert.hpp"
#include "vector.hpp"
#include "fstream.hpp"
#include "function_pointers.hpp"
#include "friend.hpp"
#include "enum.hpp"
#include "nullptr.hpp"
#include "auto.hpp"
#include "typeid.hpp"
#include "union.hpp"
#include "struct.hpp"
#include "map.hpp"
#include "class.hpp"
#include "encapsulation.hpp"
#include "inheritance.hpp"
#include "linked_list.hpp"
#include "polymorphism.hpp"
#include "abstract_class.hpp"
#include "shared_ptr.hpp"
#include "unique_ptr.hpp"
#include "weak_ptr.hpp"
#include "pair.hpp"
#include "unordered_map.hpp"
#include "for.hpp"
#include "for_each.hpp"
#include "override.hpp"
#include "final.hpp"
#include "Lambda.hpp"
#include "default.hpp"
#include "delete.hpp"
#include "decltype.hpp"
#include "init_list.hpp"
#include "move.hpp"
#include "rvalue_references.hpp"
#include "function.hpp"
#include "forward.hpp"
#include "bind.hpp"
#include "sort.hpp"

int main()
{
	test_sort_bubble();
	test_sort_insertion();
	test_sort_selection();
	test_sort_shell();
	test_sort_merge();
	test_sort_quick();
	test_sort_heap();
	test_sort_STL();

	std::cout << "ok" << std::endl;
	return 0;
}
