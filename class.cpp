#include <iostream>
#include <string>
using namespace std;

int main() {
    string names[3];
    int ids[3];


    for (int i = 0; i < 3; i++) {
        cout << "Enter name of student " << i + 1 << ": ";
        getline(cin, names[i]);
        cout << "Enter ID of student " << i + 1 << ": ";
        cin >> ids[i];
        cin.ignore();
    }

    cout << "\nStored Information:\n";
    for (int i = 0; i < 3; i++) {
        cout << "Student " << i + 1 << ": " << names[i] << " (ID: " << ids[i] << ")" << endl;
    }

    return 0;
}
#include <iostream>
using namespace std;

int main() {

    int intArray[4];
    float floatArray[4];


    float sum = 0;
    float product = 1;
    cout << "Enter 4 integer numbers:\n";
    for (int i = 0; i < 4; i++) {
        cout << "Integer " << i + 1 << ": ";
        cin >> intArray[i];
        sum += intArray[i];
        product *= intArray[i];
    }
    
    cout << "\nEnter 4 floating numbers:\n";
    for (int i = 0; i < 4; i++) {
        cout << "Float " << i + 1 << ": ";
        cin >> floatArray[i];
        sum += floatArray[i];
        product *= floatArray[i];
    }

    float average = sum / 8;

    cout << "\nResults:\n";
    cout << "Summation: " << sum << endl;
    cout << "Average: " << average << endl;
    cout << "Multiplication (Product): " << product << endl;

    return 0;
}
#include <iostream>
using namespace std;

int main() {

    float cgpaa[3];
    
    cout << "Enter the CGPAs of 3 students:\n";
    for (int i = 0; i < 3; i++) {
        cout << "Student " << i + 1 << ": ";
        cin >> cgpaa[i];
    }

    float lowestCGPA = cgpaa[0];

    for (int i = 1; i < 3; i++) {
        if (cgpaa[i] < lowestCGPA) {
            lowestCGPA = cgpaa[i];
        }
    }


    cout << "\nThe lowest CGPA is: " << lowestCGPA << endl;

    return 0;
}
#include <iostream>
using namespace std;

int main() {

    int numbers[5];

    cout << "Enter 5 integer numbers:\n";
    for (int i = 0; i < 5; i++) {
        cout << "Number " << i + 1 << ": ";
        cin >> numbers[i];
    }


    for (int i = 0; i < 5; i++) {
        if (numbers[i] % 2 == 0) {
            numbers[i] = 0;
        } else {
            numbers[i] = 1;
        }
    }


    cout << "\nModified Array:\n";
    for (int i = 0; i < 5; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
#include <iostream>
using namespace std;
int main() {
    int intnum[4];
    float floatnum[4];
    float sum=0,avg,mult;
    for(int i=0;i<4;i++){
        cout<<"Enter a int number["<<i<<"] :"<<endl;
        cin>>intnum[i];
        sum+=i;
        mult*=i;
    }
    for(int i=0;i<4;i++){
        cout<<"Enter a floating number["<<i<<"] :"<<endl;
        cin>>floatnum[i];
        sum+=i;
        mult*=i;
    }avg=sum/8;

        cout<<"here's the result's"<<endl;
        cout<<"sum of the number "<<sum<<endl;
        cout<<"multipication of the number"<<mult<<endl;
        cout<<"avgerage of the number "<<avg<<endl;


}
#include <iostream>
using namespace std;
int main() {
    float cpga[3];
    float lowestcgpa;
    for(int i=0;i<3;i++){
        cout<<"Enter student cpga:"<<endl;
        cin>>cpga[i];
    }
    lowestcgpa = cpga[0];
    for(int i=0;i<3;i++){
        if(lowestcgpa>cpga[i]){
            lowestcgpa=cpga[i];
        }

    }

cout<<"lowestest cgpa"<<lowestcgpa;

}
#include <iostream>
using namespace std;
int main() {
    int num[5];
    for(int i =0;i<5;i++) {
        cout << "enter a number " << endl;
        cin >> num[i];
    }
    for(int i =0;i<5;i++){
        if(num[i]%2==0){
            num[i]=0;
        } else{
            num[i]=1;
        }
    }for(int i =0;i<5;i++){
        cout<<num[i];
    }

}
#include <iostream>
using namespace std;
int main() {
    int num[6];
    for(int i =0;i<6;i++){
        cout<<"Enter a number ["<<i<<"] :"<<endl;
        cin>>num[i];
    }
    for(int i =0;i<6;i++){
        if(num[i]%2==0){
            num[i]*=2;
        } else{
            num[i]*=3;
        }if(num[i]%5==0){
            cout<<"the number is divisable by 5"<<endl;
        }else{
            cout<<"the number is not divisable by 5"<<endl;
        }
    }



}
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of participants: ";
    cin >> n;
    if (n <= 0) {
        cout << "Number of participants " << endl;
        return 1;
    }

    float score [n];
    float sum = 0;

    for (int i = 0; i < n; i++) {
        cout << "Enter the score [" << i << "]: ";
        cin >> score[i];
        sum += score[i];
    }

    float avg = sum / n;
    float highestscore = score[0];
    float lowestscore = score[0];

    for (int i = 1; i < n; i++) {
        if (score[i] > highestscore) {
            highestscore = score[i];
        }
        if (score[i] < lowestscore) {
            lowestscore = score[i];
        }
    }

    cout << "*** Display ***" << endl;
    cout << "The average score is: " << avg << endl;
    cout << "The highest score is: " << highestscore << endl;
    cout << "The lowest score is: " << lowestscore << endl;

    return 0;
}
