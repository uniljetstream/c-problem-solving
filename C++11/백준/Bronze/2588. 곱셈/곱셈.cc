#include <iostream>

using namespace std;

int main()
{
    string num1, num2;
    
    cin >> num1 >> num2;
    
    for(int i=2;i>-1;i--)
    {
        cout << stoi(num1) * (num2[i]-'0') << endl;
    }
    
    cout << stoi(num1)*stoi(num2);
}