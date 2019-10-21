#include <soci/soci.h>
#include <soci/empty/soci-empty.h>

#include <spdlog/spdlog.h>
#include <spdlog/sinks/stdout_sinks.h>

int main(int, char**) {
    soci::session sql(*soci::factory_empty(), "");

    sql << "statement.";

    auto logger = spdlog::stdout_logger_mt("stdout");

    logger->info("Hello, World!");

    return 0;
}
