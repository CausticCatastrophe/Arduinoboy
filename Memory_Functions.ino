
boolean checkMemory()
{
  byte chk;
  return true;
}

void initMemory(boolean reinit)
{
  for(int m=0;m<=MEM_MAX;m++){
    memory[m] = defaultMemoryMap[m];
  }
  changeTasks();
}


void loadMemory()
{
  changeTasks();
}

void saveMemory()
{
}

void changeTasks()
{
  midioutByteDelay = memory[MEM_MIDIOUT_BYTE_DELAY] * memory[MEM_MIDIOUT_BYTE_DELAY+1];
  midioutBitDelay = memory[MEM_MIDIOUT_BIT_DELAY] * memory[MEM_MIDIOUT_BIT_DELAY+1];
}
