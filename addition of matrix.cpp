#include <iostream>
using namespace std;

int main() {
   int r=10,c=10;
   int a[r][c],b[r][c],sum[r][c], i, j;
   
   cout<<"Enter number of rows:";
   cin>>r;
   cout<<"Enter number of column:";
   cin>>c;
   

   for(i=0;i<r;i++){
   	for(j=0;j<c;j++){
   		cout<<"Enter elements of the first matrix:";
   		cin>>a[i][j];
	   }
   }
   cout<<endl;
    for(i=0;i<r;i++){
   		for(j=0;j<c;j++){
   			cout<<"Enter elements of the second matrix:";
   		cin>>b[i][j];
	   }
   }
   
	cout<<"The first matrix are:\n";
    for(i=0;i<r;i++){
   		for(j=0;j<c;j++){
   			cout<<a[i][j]<<" ";
   		}
   		cout<<endl;
   	}
   	cout<<endl;
   	cout<<"The second matrix are:\n";
   	for(i=0;i<r;i++){
   		for(j=0;j<c;j++){
   			cout<<b[i][j]<<" ";
   		}
   		cout<<endl;
   	}



	for(i=0;i<r;i++){
   		for(j=0;j<c;j++){
			sum[i][j]=a[i][j]+b[i][j];
		}
	}

	cout<<endl;
   	cout<<"The sum of  matrix are:\n";
   	for(i=0;i<r;i++){
   		for(j=0;j<c;j++){
   			cout<<sum[i][j]<<" ";
   		}
   		cout<<endl;
   	}
   return main();
   
   }
   
