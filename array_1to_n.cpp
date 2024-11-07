// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number of elements in array : ";
//     cin>>n;
//     cout<<endl;
//     int arr[n];
//     cout<<"Enter the elements in array : ";
//     for(int i=0;i<n;i++){
//         cin>>arr[i] ;
//     }
//     int ans[n];
//     for(int i=0;i<n;i++){
        
//             for(int j=0;j<n;j++){
//                if(arr[i]%2!=0){
//                 ans[j]=arr[i];
//                } 
//                else{

//                }
//             }
        
        
//     }


// }
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements in the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    
    vector<int> odd, even;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0)
            odd.push_back(arr[i]);
        else
            even.push_back(arr[i]);
    }

    
    sort(odd.begin(), odd.end());
    sort(even.begin(), even.end(), greater<int>());

    
    int index = 0;
    for (int num : odd) {
        arr[index++] = num;
    }
    for (int num : even) {
        arr[index++] = num;
    }

    
    cout << "Array after sorting odd in ascending and even in descending order: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}