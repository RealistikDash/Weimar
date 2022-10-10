#include "reader.hpp"

using namespace weimar::packets::reader;

template <typename T>
T ReadableBuffer::read_primitive() {
    auto value = *reinterpret_cast<T*>(buffer);
    buffer += sizeof(T);
    return value;
}

template <typename T>
void ReadableBuffer::read_primitive(T* value) {
    memcpy(value, buffer, sizeof(T));
}
