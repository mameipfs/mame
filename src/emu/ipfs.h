#ifndef MAME_EMU_IPFS_H
#define MAME_EMU_IPFS_H

#pragma once

#include <string>
#include <vector>
#include <map>

extern std::vector<std::string> m_ipfs_attempts; /* IPFS rom fetch attempts */

extern std::map<std::string, std::string> m_romcids; /* IPFS CID rom mapping */

bool fetch_and_pin_rom_file(std::string media_path, std::vector<std::string> paths);

#endif  // MAME_EMU_IPFS_H