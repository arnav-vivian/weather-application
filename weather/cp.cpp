#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'


 void segregateElements(int arr[],int n)
    { 
        vector<int> v;
        for(int i=0;i<n-1;i++)
        {   
            if(arr[i]>0)
            {
                v.push_back(arr[i]);
            }
        
                
        }
            for(int i=0;i<n-1;i++)
        {   
            if(arr[i]<0)
            {
                v.push_back(arr[i]);
            }
        
                
        }
        for(int i=0;i<v.size()-1;i++)
        {   
         
            arr[i]=v[i];
        }
           for(int i=0;i<v.size()-1;i++)
        {   
         
            cout<<arr[i]<<" ";
        }
            
        
    }

int32_t main(){
    ios_base::sync_with_stdio(false);

   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++)
   {
    cin>>a[i];
   }
       segregateElements( a, n);
    
    return 0;
}