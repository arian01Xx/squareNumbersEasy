#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        make_heap(gifts.begin(), gifts.end()); //mayor al principio de la fila
        for(int i=0, x=INT_MAX; i<k && x>1; i++){
            pop_heap(gifts.begin(), gifts.end());
            x=gifts.back(); //saca el ultimo elemento del vector
            gifts.back()=sqrt(gifts.back()); //le saca la raiz cuadrada
            push_heap(gifts.begin(), gifts.end()); 
        }
        return accumulate(gifts.begin(), gifts.end(), 0LL);
    }
};

int main(){
    return 0;
}