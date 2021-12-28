// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from test.djinni

#include "NativeTestHelpers.hpp"  // my header
#include "Future_wasm.hpp"
#include "NativeAssortedPrimitives.hpp"
#include "NativeAsyncInterface.hpp"
#include "NativeClientInterface.hpp"
#include "NativeColor.hpp"
#include "NativeMapListRecord.hpp"
#include "NativeNestedCollection.hpp"
#include "NativePrimitiveList.hpp"
#include "NativeSetRecord.hpp"
#include "NativeUserToken.hpp"

namespace djinni_generated {

em::val NativeTestHelpers::cppProxyMethods() {
    static const em::val methods = em::val::array(std::vector<std::string> {
    });
    return methods;
}

em::val NativeTestHelpers::get_set_record() {
    auto r = ::testsuite::TestHelpers::get_set_record();
    return ::djinni_generated::NativeSetRecord::fromCpp(r);
}
bool NativeTestHelpers::check_set_record(const em::val& w_rec) {
    auto r = ::testsuite::TestHelpers::check_set_record(::djinni_generated::NativeSetRecord::toCpp(w_rec));
    return ::djinni::Bool::fromCpp(r);
}
em::val NativeTestHelpers::get_primitive_list() {
    auto r = ::testsuite::TestHelpers::get_primitive_list();
    return ::djinni_generated::NativePrimitiveList::fromCpp(r);
}
bool NativeTestHelpers::check_primitive_list(const em::val& w_pl) {
    auto r = ::testsuite::TestHelpers::check_primitive_list(::djinni_generated::NativePrimitiveList::toCpp(w_pl));
    return ::djinni::Bool::fromCpp(r);
}
em::val NativeTestHelpers::get_nested_collection() {
    auto r = ::testsuite::TestHelpers::get_nested_collection();
    return ::djinni_generated::NativeNestedCollection::fromCpp(r);
}
bool NativeTestHelpers::check_nested_collection(const em::val& w_nc) {
    auto r = ::testsuite::TestHelpers::check_nested_collection(::djinni_generated::NativeNestedCollection::toCpp(w_nc));
    return ::djinni::Bool::fromCpp(r);
}
em::val NativeTestHelpers::get_map() {
    auto r = ::testsuite::TestHelpers::get_map();
    return ::djinni::Map<::djinni::String, ::djinni::I64>::fromCpp(r);
}
bool NativeTestHelpers::check_map(const em::val& w_m) {
    auto r = ::testsuite::TestHelpers::check_map(::djinni::Map<::djinni::String, ::djinni::I64>::toCpp(w_m));
    return ::djinni::Bool::fromCpp(r);
}
em::val NativeTestHelpers::get_empty_map() {
    auto r = ::testsuite::TestHelpers::get_empty_map();
    return ::djinni::Map<::djinni::String, ::djinni::I64>::fromCpp(r);
}
bool NativeTestHelpers::check_empty_map(const em::val& w_m) {
    auto r = ::testsuite::TestHelpers::check_empty_map(::djinni::Map<::djinni::String, ::djinni::I64>::toCpp(w_m));
    return ::djinni::Bool::fromCpp(r);
}
em::val NativeTestHelpers::get_map_list_record() {
    auto r = ::testsuite::TestHelpers::get_map_list_record();
    return ::djinni_generated::NativeMapListRecord::fromCpp(r);
}
bool NativeTestHelpers::check_map_list_record(const em::val& w_m) {
    auto r = ::testsuite::TestHelpers::check_map_list_record(::djinni_generated::NativeMapListRecord::toCpp(w_m));
    return ::djinni::Bool::fromCpp(r);
}
void NativeTestHelpers::check_client_interface_ascii(const em::val& w_i) {
    ::testsuite::TestHelpers::check_client_interface_ascii(::djinni_generated::NativeClientInterface::toCpp(w_i));
}
void NativeTestHelpers::check_client_interface_nonascii(const em::val& w_i) {
    ::testsuite::TestHelpers::check_client_interface_nonascii(::djinni_generated::NativeClientInterface::toCpp(w_i));
}
void NativeTestHelpers::check_client_interface_args(const em::val& w_i) {
    ::testsuite::TestHelpers::check_client_interface_args(::djinni_generated::NativeClientInterface::toCpp(w_i));
}
void NativeTestHelpers::check_enum_map(const em::val& w_m) {
    ::testsuite::TestHelpers::check_enum_map(::djinni::Map<::djinni_generated::NativeColor, ::djinni::String>::toCpp(w_m));
}
void NativeTestHelpers::check_enum(int32_t w_c) {
    ::testsuite::TestHelpers::check_enum(::djinni_generated::NativeColor::toCpp(w_c));
}
em::val NativeTestHelpers::token_id(const em::val& w_t) {
    auto r = ::testsuite::TestHelpers::token_id(::djinni_generated::NativeUserToken::toCpp(w_t));
    return ::djinni_generated::NativeUserToken::fromCpp(r);
}
em::val NativeTestHelpers::create_cpp_token() {
    auto r = ::testsuite::TestHelpers::create_cpp_token();
    return ::djinni_generated::NativeUserToken::fromCpp(r);
}
void NativeTestHelpers::check_cpp_token(const em::val& w_t) {
    ::testsuite::TestHelpers::check_cpp_token(::djinni_generated::NativeUserToken::toCpp(w_t));
}
int64_t NativeTestHelpers::cpp_token_id(const em::val& w_t) {
    auto r = ::testsuite::TestHelpers::cpp_token_id(::djinni_generated::NativeUserToken::toCpp(w_t));
    return ::djinni::I64::fromCpp(r);
}
void NativeTestHelpers::check_token_type(const em::val& w_t,const std::string& w_type) {
    ::testsuite::TestHelpers::check_token_type(::djinni_generated::NativeUserToken::toCpp(w_t),
                     ::djinni::String::toCpp(w_type));
}
em::val NativeTestHelpers::return_none() {
    auto r = ::testsuite::TestHelpers::return_none();
    return ::djinni::Optional<std::experimental::optional, ::djinni::I32>::fromCpp(r);
}
em::val NativeTestHelpers::assorted_primitives_id(const em::val& w_i) {
    auto r = ::testsuite::TestHelpers::assorted_primitives_id(::djinni_generated::NativeAssortedPrimitives::toCpp(w_i));
    return ::djinni_generated::NativeAssortedPrimitives::fromCpp(r);
}
em::val NativeTestHelpers::id_binary(const em::val& w_b) {
    auto r = ::testsuite::TestHelpers::id_binary(::djinni::Binary::toCpp(w_b));
    return ::djinni::Binary::fromCpp(r);
}
em::val NativeTestHelpers::get_async_result() {
    auto r = ::testsuite::TestHelpers::get_async_result();
    return ::djinni::FutureAdaptor<::djinni::I32>::fromCpp(std::move(r));
}
em::val NativeTestHelpers::future_roundtrip(const em::val& w_f) {
    auto r = ::testsuite::TestHelpers::future_roundtrip(::djinni::FutureAdaptor<::djinni::I32>::toCpp(w_f));
    return ::djinni::FutureAdaptor<::djinni::String>::fromCpp(std::move(r));
}
em::val NativeTestHelpers::check_async_interface(const em::val& w_i) {
    auto r = ::testsuite::TestHelpers::check_async_interface(::djinni_generated::NativeAsyncInterface::toCpp(w_i));
    return ::djinni::FutureAdaptor<::djinni::String>::fromCpp(std::move(r));
}

EMSCRIPTEN_BINDINGS(test_helpers) {
    em::class_<::testsuite::TestHelpers>("TestHelpers")
        .smart_ptr<std::shared_ptr<::testsuite::TestHelpers>>("TestHelpers")
        .function("nativeDestroy", &NativeTestHelpers::nativeDestroy)
        .class_function("getSetRecord", NativeTestHelpers::get_set_record)
        .class_function("checkSetRecord", NativeTestHelpers::check_set_record)
        .class_function("getPrimitiveList", NativeTestHelpers::get_primitive_list)
        .class_function("checkPrimitiveList", NativeTestHelpers::check_primitive_list)
        .class_function("getNestedCollection", NativeTestHelpers::get_nested_collection)
        .class_function("checkNestedCollection", NativeTestHelpers::check_nested_collection)
        .class_function("getMap", NativeTestHelpers::get_map)
        .class_function("checkMap", NativeTestHelpers::check_map)
        .class_function("getEmptyMap", NativeTestHelpers::get_empty_map)
        .class_function("checkEmptyMap", NativeTestHelpers::check_empty_map)
        .class_function("getMapListRecord", NativeTestHelpers::get_map_list_record)
        .class_function("checkMapListRecord", NativeTestHelpers::check_map_list_record)
        .class_function("checkClientInterfaceAscii", NativeTestHelpers::check_client_interface_ascii)
        .class_function("checkClientInterfaceNonascii", NativeTestHelpers::check_client_interface_nonascii)
        .class_function("checkClientInterfaceArgs", NativeTestHelpers::check_client_interface_args)
        .class_function("checkEnumMap", NativeTestHelpers::check_enum_map)
        .class_function("checkEnum", NativeTestHelpers::check_enum)
        .class_function("tokenId", NativeTestHelpers::token_id)
        .class_function("createCppToken", NativeTestHelpers::create_cpp_token)
        .class_function("checkCppToken", NativeTestHelpers::check_cpp_token)
        .class_function("cppTokenId", NativeTestHelpers::cpp_token_id)
        .class_function("checkTokenType", NativeTestHelpers::check_token_type)
        .class_function("returnNone", NativeTestHelpers::return_none)
        .class_function("assortedPrimitivesId", NativeTestHelpers::assorted_primitives_id)
        .class_function("idBinary", NativeTestHelpers::id_binary)
        .class_function("getAsyncResult", NativeTestHelpers::get_async_result)
        .class_function("futureRoundtrip", NativeTestHelpers::future_roundtrip)
        .class_function("checkAsyncInterface", NativeTestHelpers::check_async_interface)
        ;
}

}  // namespace djinni_generated
