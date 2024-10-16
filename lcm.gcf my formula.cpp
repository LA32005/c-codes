#include <iostream>
using namespace std;

int main() {
    int menu;
    cout<<"Enter number:";
    cin>>menu;
    
    if (menu==1){
    int n1, n2, n3;
    int lcm = 0;
    cout << "Enter first number: ";
    cin >> n1;
    cout << "Enter second number: ";
    cin>>n2;
    cout<<"Enter third number:";
    cin>>n3;
    for(int i = 1; i <= 100; i++){
        for(int j = 1; j <= 100; j++) {
            for(int k = 1; k <= 100; k++) {
                if((n1 * i == n2 * j) && (n1 * i == n3 * k)) {
                    lcm = n1 * i;
                    break; // Break out of the 
                //innermost loop once lcm is found
                }
            }
                if(lcm != 0){
                    break; // Break out of the middle loop if lcm is found
                }
        }
                if(lcm != 0){
                    break; // Break out of the outermost loop if lcm is found
                }
    }

                cout << "The LCM is " << lcm << endl<<endl;
    }
    
    if(menu==2){
        int n1,n2,lcm,r,gcf;
        cout<<"Enter first number:";
        cin>>n1;
        cout<<"Enter second number:";
        cin>>n2;
        for(int i=1;i<100;i++){
            for(int j=1;j<100;j++){
                if(n1* i==n2*j){
                    lcm=n1*i;
                    break;
                }
                if(lcm!=0){
                    break;
                    
                }
            }
        }
        cout<<"The LCM is " <<lcm<<endl<<endl;
        
    }
    
    if(menu==3){
        int n1,n2,n3,n4,lcm;
        cout<<"Enter first number:";
        cin>>n1;
        cout<<"Enter second number:";
        cin>>n2;
        cout<<"Enter third number:";
        cin>>n3;
        cout<<"Enter fourth number:";
        cin>>n4;
        
        for(int i = 1; i<100; i++){
            for(int j = 1; j<100; j++){
                for(int k = 1; k<100; k++){
                    for(int l = 1; l<100; l++){
                        if(((n1 * i == n2* j) && (n1*i == n3* k)&& (n1 * i == n4 * l))){
                            lcm= n1 * i;
                            break;
                        }
                        if (lcm!= 0){
                            break;
                        }
                        if (lcm!= 0){
                            break;
                        }
                        if (lcm!= 0){
                            break;
                        }
                    }
                }         
            }      
        }
        cout<<"The lcm is "<<lcm<<endl<<endl;
        
}


    if(menu==4){	
        int n1,n2,gcf,r;
        cout<<"Enter the first number:";
        cin>>n1;
        cout<<"Enter the second number:";
        cin>>n2;

		while(n2!=0){
			r=n1%n2;
			n1=n2;
			n2=r;
		}
		gcf=n1;
		cout<<"The gcd is"<<" "<<gcf<<endl<<endl;
	}
	if(menu==5){	
		int n1;
		int n2;
		int n3;
		int gcf,r;
		cout<<"Enter the first number:";
		cin>>n1;
		cout<<"Enter the second number:";
		cin>>n2;
		cout<<"Enter the third number:";
		cin>>n3;

		while(n2!=0){
			r=n1%n2;
			n1=n2;
			n2=r;
		}
		gcf=n1;
		n2=n3;
		
		while(n2!=0){
			r=gcf%n2;
			gcf=n2;
			n2=r;
		}
		cout<<"The gcd is"<<" "<<gcf<<endl<<endl;
}
    return main();
    
}


