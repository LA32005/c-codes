#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of elements:";
    cin>>n;
    
    int arr[n];
    
    for(int i=0;i<n;i++){
        cout<<"Enter array Elements:";
        
        cin>>arr[i];
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
    
    int el,newpos;
    cout<<"\n\nEnter element you want to search:";
    cin>>el;
    for(int i=0;i<n;i++){
        if(arr[i]==el){
            newpos=i+1;
            cout<<"Element "<<el<<" is in position "<<newpos;
        }

    }
    int posel,wen;
    cout<<"\n\nEnter element position you want to update:";
    cin>>posel;
    cout<<"Enter the number:";
    cin>>wen;
    
    arr[posel-1]=wen;  
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
    int pos;
    cout<<"\n\nEnter element position you want to delete:";
    cin>>pos;
    
    for(int i=0;i<n;i++){
        if(i==pos-1){
            continue;
        }
        cout<<arr[i]<<"\t";
    }
    

        
        
    return 0;
    

}
