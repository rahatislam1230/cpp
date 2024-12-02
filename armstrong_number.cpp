#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int lower, higher;

    cout << "Enter two numbers (lower and higher): ";
    cin >> lower >> higher;

    cout << "Armstrong numbers between " << lower << " and " << higher << " are:\n";

    for (int i = lower + 1; i < higher; i++) {
        int temp1 = i;
        int temp2 = i;
        int n = 0;
        int result = 0;
        while (temp1 != 0) {
            temp1 /= 10;
            ++n;
        }
        while (temp2 != 0) {
            int remainder = temp2 % 10;
            result += pow(remainder, n);
            temp2 /= 10;
        }
        if (result == i) {
            cout << i << "\n";
        }
    }

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int totalClasses, attendedClasses;
    cout << "Enter the total number of classes held: ";
    cin >> totalClasses;

    cout << "Enter the number of classes attended: ";
    cin >> attendedClasses;

    float attendancePercentage = (float)attendedClasses / totalClasses * 100;

    cout << "Attendance Percentage: " << attendancePercentage << "%" << endl;

    if (attendancePercentage < 80) {
        cout << "Not Allowed" << endl;
    } else {
        cout << "Allowed" << endl;
        if (attendancePercentage == 100) {
            cout << "You get 2 bonus marks!" << endl;
        }
    }

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) 
            sum += arr[i];
        }
    }

    cout << "Sum of elements at odd positions: " << sum << endl;
    if (sum % 2 == 0) {
        cout << "The summation is EVEN" << endl;
    } else {
        cout << "The summation is ODD" << endl;
    }

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    const int DAYS = 7; 
    float temperatures[DAYS]; 
    float sum = 0.0, average;

    cout << "Welcome to Weekly Temperature Analysis System!" << endl;
    cout << "Please enter the daily temperatures for the week:" << endl;

    for (int i = 0; i < DAYS; i++) {
        cout << "Day " << i + 1 << ": ";
        cin >> temperatures[i];
        sum += temperatures[i];
    }

    average = sum / DAYS;


    cout << "Average temperature per day: " << average << endl;

    if (average >= 32) {
        cout << "Hot Weather" << endl;
    } else if (average >= 18 && average < 32) {
        cout << "Moderate Weather" << endl;
    } else {
        cout << "Cold Weather" << endl;
    }

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int const day=7;
    float temperature[day];
    float sum=0,average;
    for (int i = 0; i < day; i++) {
        cout<<"Enter the temperature of each days ["<<i<<"] : "<<endl;
        cin>>temperature[i];
        sum+=temperature[i];
    }
    average=sum/day;
    cout<<"the average of a week is: "<<average<<endl;
    if(average>=32){
        cout<<"hot weather "<<endl;
    }else if(average>=18 && average<32){
        cout<<"Moderator weather "<<endl;
    }else{
        cout<<"cold weather "<<endl;
    }


    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter a value of array : "<<endl;
    cin>>n;
    float arry[n];
    int sum=0;
    for(int i =0;i<n;i++){
        cout<<"Enter the value of a number ["<<i<<"] : "<<endl;
        cin>>arry[i];
        sum+=arry[i];
    }
    cout<<"the sum is :"<<sum<<endl;
    if(sum%2== 0){
        cout<<"the sum is a Even"<<endl;
    }else{
        cout<<"the sum is Odd "<<endl;
    }



    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int totalclass, totalattendance;
    float percentage;
    cout << "Enter the total classes held: ";
    cin >> totalclass;
    cout << "Enter total attendance: ";
    cin >> totalattendance;
    percentage = (float)totalattendance / totalclass * 100;
    cout << "Attendance Percentage: " << percentage << "%" << endl;

    if (percentage >= 80) {
        cout << "Allowed to sit for the exam." << endl;

        if (percentage == 100) {
            cout << "You will get 2 bonus marks!" << endl;
        }
    } else {
        cout << "Not allowed to sit for the exam." << endl;
    }

    return 0;
}
