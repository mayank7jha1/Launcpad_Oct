#include<iostream>
using  namespace std;
int n;

int maxArea(int* height) {
   int MaxArea = 0;
   int j = n - 1;
   for (int i = 0; i < n; i += 1 ) {
      int Distance = (j - i);
      int h = min(height[j], height[i]);

      //This is the contribution of the
      //smaller wall out of a[j] and a[i].
      int contribution = (h * Distance);

      if (MaxArea < contribution) {
         MaxArea = contribution;
      }
   }
   return MaxArea;
}


int main() {

   cin >> n;
   int height[n];
   for (int i = 0; i < n; i += 1) {
      cin >> height[i];
   }

   cout << maxArea(height) << endl;
}


