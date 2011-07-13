/*
 -----------------------------------------------------------------------------
    This file is part of the Thoronador's random stuff.
    Copyright (C) 2011 thoronador

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
 -----------------------------------------------------------------------------
*/

#ifndef DIRECTORYFILELIST_H
#define DIRECTORYFILELIST_H

#include <string>
#include <vector>

#if defined(_WIN32)
  const std::string DirectorySeparator = "\\";
#elif defined(__linux__) || defined(linux)
  const std::string DirectorySeparator = "/";
#else
  #error "Unknown operating system!"
#endif

/* structure for file list entries */
struct FileEntry {
         std::string FileName;
         bool IsDirectory;
};//struct

/* returns a vector containing the names of all files and directories within the
   given directory

   parameters:
       Directory - the directory that shall be searched
*/
std::vector<FileEntry> getDirectoryFileList(const std::string& Directory);

/* Checks for existence of file FileName and returns true, if it exists. */
//bool FileExists_old(const std::string& FileName);

/* Checks for existence of file FileName and returns true, if it exists. */
bool FileExists(const std::string& FileName);

#endif // DIRECTORYFILELIST_H