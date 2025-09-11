//
// Created by tsuna on 9/11/25.
//

#include "Config.h"

Config::Config() { loadConfig(); }

Config::~Config() = default;

[[nodiscard]] std::string Config::getType() const { return this->type; }
[[nodiscard]] int Config::getVersion() const { return this->version; }
[[nodiscard]] std::vector<std::string> Config::getDbPath() const { return this->dbPath; }
[[nodiscard]] bool Config::isLoaded() const { return this->loaded; }

void Config::setType(const std::string& type_) { this->type = type_; }
void Config::setVersion(const int version_) { this->version = version_; }
void Config::setDbPath(const std::vector<std::string>& dbPath_) { this->dbPath = dbPath_; }
void Config::setLoaded(const bool loaded_) { this->loaded = loaded_; }

void Config::addDBPath(const std::string& dbPath_) { this->dbPath.emplace_back(dbPath_); }

void Config::loadConfig() {
    try {
        YAML::Node etc = YAML::LoadFile("config.yml");

        this->type = etc["Header"]["Type"].as<std::string>();
        this->version = etc["Header"]["Version"].as<int>();

        for (const YAML::Node& body = etc["Body"]; const auto & i : body) {
            const YAML::Node& item = i;
            const auto path = item["DBPath"].as<std::string>();
            this->dbPath.emplace_back(path);
        }
    }
    catch (const std::exception &e) {
        this->type = "None";
        this->version = 0;
        this->dbPath.clear();
        this->loaded = false;
    }
}

void Config::createConfig() {
    std::ofstream file("config.yml");

    if (!file) throw std::ios_base::failure("Error creating config file");

    file << R"(
Header:
    Type: RO_BARTER_CONFIG
    Version: 1

Body:
    )";
    file.close();
    printf("Created config file\n");
    printf("Loading config...\n");
    loadConfig();
    printf("Config loaded\n");
}