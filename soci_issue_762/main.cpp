#include <soci/soci.h>

#include <spdlog/spdlog.h>
#include <spdlog/sinks/stdout_sinks.h>

int main(int, char**) {
    auto logger = spdlog::stdout_logger_mt("stdout");

    logger->info("Hello, World!");

    return 0;
}
