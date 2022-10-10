#include <cstdint>
#include <vector>
#include <string>

namespace weimar::packets::reader {
    class ReadableBuffer {
        uint8_t* buffer;
        public:
            template <typename T> T read_primitive();
            template <typename T> void read_primitive(T* value);
            template <typename T> void read_primitive(T& value);

            uint16_t read_uleb128();
            std::vector<int32_t> read_i32_array();
            std::string read_string();
    };
}
