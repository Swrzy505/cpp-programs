#include <iostream>
using namespace std;

int main() {
    int num, reverse = 0, rem, temp;
    cout << "Enter the Number: ";
    cin >> num;
    temp = num;
    while (temp > 0) {
        rem = temp % 10;//example take 121 = num = temp so 121%10=1;
        reverse = (reverse * 10) + rem;// rev = 0 so then 0+1 =1 ;
        temp = temp / 10;
    }
    if (num == reverse)
        cout << "\nIt is a Palindrome Number";
    else
        cout << "\nIt is not a Palindrome Number";
    return 0;
}
