  # include <iostream>
  # include <thread>
  
  void hello()
  {
      std::cout << "Hello Github\n";
  }
  
  int main()
  {
      std::thread t(hello);
      t.join();
      while(1);
  }
