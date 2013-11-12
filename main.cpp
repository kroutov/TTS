#include "TextToSpeech.h"

int	main()
{
  TextToSpeech *stt = new TextToSpeech();

  stt->Say("Hello world !");
  stt->Say_file("nuit.txt");
  stt->Text_to_wave("With Jarvis you don't need you hands !", "test.wav");
  return (0);
}
