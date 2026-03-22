#include <iostream>
using namespace std;

int main()
{
    int n = 5;

   for(int i = 1 ; i < n + 1 ; i++)
   {
        for(int j = 1 ; j < n + 1 ; j++)
        {
            if(j== 1 || i == 1 || i == n || j == n){
                cout << "* ";
            }else{
                cout << "  ";
            }
            
        }
        cout<<endl;
   }

    return 0;
}