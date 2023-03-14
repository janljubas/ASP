
// #6.Zadatak

#include <iostream>
using namespace std;

template <class Double> class Queue {
 private:
   static const int MAX = 10;
   double queue[MAX];
   int write = 0;
   int read = 0;

 public:
   bool dodaj(double item) {
      if ((write + 1) % MAX == read)
         return false;
      queue[write] = item;
      write = (write + 1) % MAX;
      return true;
   }

   bool skini(double &item) {
      if (write == read)
         return false;
      item = queue[read];
      read = (read + 1) % MAX;
      return true;
   }
   
};

int main(void) {
   Queue<double> q;
   int n;
   cin>>n;
   double m;

   for(int i=0; i<n; i++) {
       cin>>m;
       q.dodaj(m);
   }

   while(q.skini(m)) cout<<m<<" ";

   return 0;
}