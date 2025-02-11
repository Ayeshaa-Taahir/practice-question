#include<iostream>
using namespace std;
int main()
{
    int sum =0;
    int arr[3][3]={{3, 61, 9},
 {35, 8, 6},
 {9, 70, 1}};
    for(int i =0; i<3;i++){
        for(int j=0; j<3;j++){
            if(arr[i][j] % 5==0 && arr[i][j] %7 ==0){
            sum=sum+arr[i][j];
            }
        }
    }
    cout<<sum;
    return 0;
}
