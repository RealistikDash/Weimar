#include <iostream>
#include "httplib/httplib.h"
#include "packets/reader.hpp"

int main() {
    httplib::Server server;
    weimar::packets::reader::ReadableBuffer buffer;
    buffer.read_primitive<int>();

    server.Get("/", [](const httplib::Request& req, httplib::Response& res) {
        res.set_content("Hello World!", "text/plain");
    });

    server.listen("0.0.0.0", 6969);
}
