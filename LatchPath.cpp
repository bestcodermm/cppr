#include "LatchPath.h"

LatchPath::LatchPath(string name)
{
  PinName = name;
}

LatchPath::~LatchPath()
{

}

const vector<string>& LatchPath::getAllPaths() const
{
  return AllPaths;
}


void LatchPath::AddPaths(string path)
{
  AllPaths.push_back(path);
}
/*
void LatchPath::AddOrganizedPaths(Path* pPath)
{
  OrganizedPaths.push_back(pPath);
}
*/
