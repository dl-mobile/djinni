// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from test.djinni

#include "NativeEmptyRecord.hpp"  // my header

namespace djinni_generated {

auto NativeEmptyRecord::toCpp(const JsType& j) -> CppType {
    return {};
}
auto NativeEmptyRecord::fromCpp(const CppType& c) -> JsType {
    em::val js = em::val::object();
    return js;
}

}  // namespace djinni_generated