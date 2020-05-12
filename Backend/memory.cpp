#include "memory.h"

Memory::Memory(unsigned long size)
{
}

deque<Segment *> *Memory::getSegments()
{
    return segments;
}

vector<Process *> *Memory::getProcesses()
{
    return processes;
}

unsigned long Memory::getSize()
{
    return size;
}

map<Segment *, Process *> *Memory::getSegmentToProcess()
{
    return segmentToProcess;
}

string Memory::getProcessName(Segment *segment)
{
    return (*segmentToProcess)[segment]->getName();
}