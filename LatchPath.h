#ifndef LATCH_PATH_HEADER
#define LATCH_PATH_HEADER

#include <iostream>
#include <cstring>
#include <vector>
#include "Path.h"

using namespace std;

class LatchPath
{
 private:
  string PinName;
  vector<string> AllPaths;
  vector<Path*> OrganizedPaths;
 public:
  LatchPath(string name);
  ~LatchPath();
  const vector<string>& getAllPaths() const;
  // const vector<Path*>& getOrganizedPaths() const;
  void AddPaths(string path);
  // void AddOrganizedPaths(Path* pPath);
};

#endif
