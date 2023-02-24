#include <vector>
#include <iostream>
using namespace std;

int getSum(vector<int> vector)
{
    int sum = 0 ;
    for (auto i = 0; i < vector.size(); i++)
    {
        sum+= vector[i];
    }
    return sum;
    
}


int main ()
{
    vector<int> vector = {1,2,3,4,5,6,7,8,9,10};
    int sum = getSum(vector);
    cout<<sum<<endl;





    return 0;
}