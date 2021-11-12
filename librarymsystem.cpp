#include<bits/stdc++.h>
using namespace std;
class book{
    int bookid;
    string bookname,authorname;
    //string authorname;
    static int count;
public:
void displaybook(){
    cout<<"*******Enter the book details******* "<<endl;
}
    void createbook(){
        cout<<"Enter the book ID: ";
        cin>>bookid;
        cout<<"Enter the book Name: ";
        cin.clear();
        cin.sync();
        getline(cin,bookname);
        cout<<"Enter the Author Name: ";
        cin.clear();
        cin.sync();
        getline(cin,authorname);
    }
    void showbook(){
        cout<<"****BOOK DETAIL****"<<endl;
        cout<<++count<<"."<<endl;
        cout<<"The book ID: "<<bookid<<endl;
        cout<<"The book Name: "<<bookname<<endl;
        cout<<"The Author Name: "<<authorname<<endl;
    }
    void modifybook(){
        cout<<"*******Enter the Modify book details******* "<<endl;
        cout<<"Enter the book Name: ";
        getline(cin,bookname);
        cout<<"Enter the Author Name: ";
        getline(cin,authorname);
    }
};
int book::count=0;

class student{
    int admno;
    string studentname;
    static int token;
    int fine;
    public:
    void displaystudent(){
        cout<<"*******Enter the Student details******* "<<endl;
    }
    void createstudent(){
        cout<<"Enter the student admission no.: ";
        cin>>admno;
        cout<<"Enter the Student Name: ";
        cin.clear();
        cin.sync();
        getline(cin,studentname);
    }
    void showstudent(){
        cout<<"****STUDENT DETAIL****"<<endl;
        cout<<++token<<"."<<endl;
        cout<<"Student Admission no.: "<<admno<<endl;
        cout<<"Student Name: "<<studentname<<endl;
    }
     void modifystudent(){
        cout<<"*******Enter the Modify Student details******* "<<endl;
        cout<<"Enter the student Admission no.: ";
        cin>>admno;
        cout<<"Enter the Student Name: ";
        getline(cin,studentname);
    }
    int fineimposed(int days)
    {
        if(days>15)
        {
            return (days-15)*5;
        }
    }
};
int student::token=0;

int main()
{ 
    book books[2];
    books[2].displaybook();
   for(int i=0;i<2;i++){
       books[i].createbook();
   }
   for(int i=0;i<2;i++){
       books[i].showbook();
   }
   student students[2];
   students[2].displaystudent();
   for(int i=0;i<2;i++){
       students[i].createstudent();
   }
    for(int i=0;i<2;i++){
       students[i].showstudent();
   }
    return 0;

}