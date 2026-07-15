//
// IpplTypes
//   Typedefs for basic types used throughout IPPL
//

#ifndef IPPL_TYPES_H
#define IPPL_TYPES_H

#include <cstddef>  //For std::size_t
#include <type_traits>

#include "Types/Vector.h"

namespace ippl {

    template<typename T> struct is_vector : std::false_type {};

    template<typename T, unsigned D> struct is_vector<Vector<T, D>> : std::true_type {};

    template<typename T>
    inline constexpr bool is_vector_v = is_vector<T>::value;

    namespace detail {
        typedef std::size_t size_type;
    }
}  // namespace ippl

#endif
