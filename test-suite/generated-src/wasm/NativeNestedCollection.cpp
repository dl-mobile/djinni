// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from nested_collection.djinni

#include "NativeNestedCollection.hpp"  // my header

namespace djinni_generated {

auto NativeNestedCollection::toCpp(const JsType& j) -> CppType {
    return {::djinni::List<::djinni::Set<::djinni::String>>::Boxed::toCpp(j["setList"])};
}
auto NativeNestedCollection::fromCpp(const CppType& c) -> JsType {
    em::val js = em::val::object();
    js.set("setList", ::djinni::List<::djinni::Set<::djinni::String>>::Boxed::fromCpp(c.set_list));
    return js;
}

}  // namespace djinni_generated