#include <bits/stdc++.h>

using namespace std;

//Lower -> Primer elemento de izquierda a derecha que es menor o igual al target
int lower_bound(vector<int>& arr, int value, int left, int right) {
    if (left > right)
        return left;
    int mid = left + (right - left) / 2;
    if (arr[mid] <= value)
        return lower_bound(arr, value, mid + 1, right);
    else
        return lower_bound(arr, value, left, mid - 1);
}

//Upper -> Primer elemento mayor al target.
int upper_bound(vector<int>& arr, int value, int left, int right) {
    if (left > right)
        return left;
    int mid = left + (right - left) / 2;
    if (arr[mid] > value)
        return upper_bound(arr, value, mid + 1, right);
    else
        return upper_bound(arr, value, left, mid - 1);
}

int main(){
    vector<int> nums = {5,7,7,8,8,10};
    int target = 8;
}
