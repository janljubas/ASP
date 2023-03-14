// 3. zadatak
#include <iostream>
#include <time.h>

using namespace std;
template <typename T> class Stack {
public:
   static const int MAX = 100;
   T stack[MAX];
   int top = -1;
   bool push(T item) {
      if (top >= MAX)   return false;
      stack[++top] = item;
      return true;
   }

   bool pop(T &item) {
      if (top < 0)
         return false;
      item = stack[top--];
      return true;
   }
};

int main(){
   Stack<int> s;
   int g;
   srand(time(NULL));
   for (int i = 0; i < 100; i++) {
      int x = rand() % 100;
      s.push(x);
   }

   while (s.pop(g)) cout << g << endl;
   
   return 0;
}