#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int num;
    int count=0;
    cin>>num;  
    int arr[num];
    for(int i=0; i<num;i++){
        int a;
        cin>>a;
        arr[i]=a;
    }
    for(int j=0;j<num;j++){
        int y = arr[j];
        int r= sqrt(y);
        if(r*r==y){
                int flag=0;
                for(int o=2; o<r;o++){
                    if(r%o==0){
                        flag+=1;
                        break;
                    }
                }
                if(flag==0){
                    cout<<y<<" ";
                    count+=1;
                }
            }
        }
    
    if(count==0){
        cout<<"No result";
    }
    return 0;
}
