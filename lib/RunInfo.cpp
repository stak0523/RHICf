#include "RunInfo.hpp"

RunInfo::RunInfo()
{
  RunNumber=0;
  NumberOfEvents=0;
  Model="";
  Seed1=-1;
  Seed2=-1;
  flag.set(0);
}

RunInfo::~RunInfo()
{
}

void RunInfo::SetRunNumber(int aRunNumber)
{ RunNumber=aRunNumber; }
void RunInfo::SetNumberOfEvents(int aNumberOfEvents)
{ NumberOfEvents=aNumberOfEvents; }
void RunInfo::SetModel(std::string aModel)
{ Model=aModel; }
void RunInfo::SetSeed1(int aSeed1)
{ Seed1=aSeed1; }
void RunInfo::SetSeed2(int aSeed2)
{ Seed2=aSeed2; }
void RunInfo::SetFlag(Flag aflag)
{ flag=aflag; }

int RunInfo::GetRunNumber()
{ return RunNumber; }
int RunInfo::GetNumberOfEvents()
{ return NumberOfEvents; }
std::string RunInfo::GetModel()
{ return Model; }
int RunInfo::GetSeed1()
{ return Seed1; }
int RunInfo::GetSeed2()
{ return Seed2; }
Flag RunInfo::GetFlag()
{ return flag; }
