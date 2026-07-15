#ifndef IPPL_TYPE_TRAITS_H
#define IPPL_TYPE_TRAITS_H

#include <type_traits>

#include "Types/Vector.h"

namespace ippl {

    template<typename T> struct is_vector : std::false_type {};

    template<typename T, unsigned D> struct is_vector<Vector<T, D>> : std::true_type {};

    template<typename T>
    inline constexpr bool is_vector_v = is_vector<T>::value;

}  // namespace ippl

#endif