#include <iostream>
using namespace std;
#include <vector>

class Sort {

public:
   
    void quicksort(int v[], int left, int right) {
        int pivot= right;

        if ((right - left) > 0) {
            int i = left;
            int j = right - 1;

            while (1) {
                while (v[i] < v[pivot]) {
                    i++;
                }
                while (v[j] > v[pivot]) {
                    j--;
                }
                if (i >= j) {
                    break;
                }
                else { swap(v[i], v[j]); }
            }
            pivot = i;
            swap(v[pivot], v[right]);

           
            quicksort(v, left, pivot-1);
            quicksort(v, pivot + 1, right);
        }
    }



    void printVec(int v[], const int n) {
        cout << "Array:" << " ";

        for (int i = 0; i < n; i++) {
            cout << v[i] << " ";
        }
    }

    void InputVec(const int n, int arr[]){
        int a;

        cout << "Enter elements:" <<endl;
        for (int i = 0; i < n; i++) {
            cin >> a;
            arr[i] = a;
        }
       
     }
    
};

int main() {
    cout << "Helo, world!";
    return 0;
}
