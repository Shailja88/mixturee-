#include <bits/stdc++.h>
using namespace std;
int main(){
   //pair<int, int> pairs;
   int arr[]={ 10,7,4,4,2,9,2,1,9,3
};
   int n=8;
   set<pair <int,int> > set1;
   for (int i = 0; i < n-1 ; i++) {
      for (int j = i + 1; j < n; j++) {
         if (arr[i] % 2 == 1 && arr[j] % 2 == 1) {
            // pairs of odd numbers
            pair p1 = make_pair(arr[i], arr[j]);
            // putting into the set
            set1.insert(p1);
         }
      }
   }
   // to display the pairs
   for (auto const &var : set1) {
      cout << "(" << var.first << ", "<< var.second << ")"<< " ";
   }
   // to clear the set
   set1.clear();
}
