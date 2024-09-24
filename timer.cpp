#include <iostream>
#include <thread>
#include <chrono>

void setTimer(int seconds) {
  for (int i = seconds; i > 0; --i) {
    std::cout << "Time remaining: " << i << " seconds\r";
    std::cout.flush();
    std::this_thread::sleep_for(std::chrono::seconds(1));
  }
  std::cout << "Time's up!      " << std::endl;
}

int main(){
  int seconds;
  std::cout << "Enter timer duration in seconds: ";
  std::cin >> seconds;

  setTimer(seconds);
  return 0;
}
