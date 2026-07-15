#include<bits/stdc++.h>
using namespace std;

void rev(vector<int>&a, int n){
    int i=0;
    int j =n-1;
    while(i<j){
        swap(a[i], a[j]);
        i++;
        j--;
    }

}

int main(){
    int n;
    cout<<"enter size of array"<<endl;
    cin>>n;
    vector<int>arr(n);

    
    cout<<"enter the elements"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
   rev(arr, n);
   cout<<"reversed array is"<<endl;
   for(int i=0; i<n; i++){
     cout<<arr[i]<<" ";
   }
   cout<<endl;
    return 0;

    

}
