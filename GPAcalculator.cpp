#include <iostream>
using namespace std;

class Grade{
	double D_grade=1;
	double Dplus_grade=1.33;
	double Cminus_grade=1.67;
	double C_grade=2;
	double Cplus_grade=2.33;
	double Bminus_grade=2.67;
	double B_grade=3;
	double Bplus_grade=3.33;
	double Aminus_grade=3.67;
	double A_grade=4;
	double Aplus_grade=4;
	
	double grade;
	static int total_ch;
	public:
		Grade(){
			grade=0;
		}
		Grade(int a){
			switch(a){
				case 1:
					grade = Aplus_grade;
				    break;
					
				case 2:
				    grade = A_grade;
					break;
					
				case 3:
				    grade = Aminus_grade;
					break;
					
				case 4:
				    grade = Bplus_grade;
					break;
					
				case 5:
				    grade = B_grade;	
					break;
					
				case 6:
				    grade = Bminus_grade;
					break;
					
				case 7:
				    grade = Cplus_grade;
					break;
					
				case 8:
				    grade = C_grade;
					break;

                case 9:
				    grade = Cminus_grade;
					break;
					
				case 10:
				    grade = Dplus_grade;
				    break;
					
				case 11:
				    grade = D_grade;
				    break;
					
				default:
				    cout << "Wrong Input!\n";									
			}
		}
		
		double grade_point(){
			double ch;
			cout << "Enter the credit hours of the course: "; cin >> ch;
			total_ch = total_ch + ch;
			
			return ch*grade;			
		}
		
		int gettotal_ch(){
            return total_ch;	
		}
		
};
int Grade::total_ch=0; 

int main(){
	int credit_hour;
	int n, x;
	double GPA=0.0;
	
	cout << "Enter the total number of courses with labs: "; cin >> n;
	double a[n];
	
	cout << "\n1 for A+\n2 for A\n3 for A-\n4 for B+\n5 for B\n6 for B-\n7 for C+\n8 for C\n9 for C-\n10 for D+\n11 for D";
	
	for(int i=0;i<n;i++){
		cout << "\nEnter the grade of course " << i+1 << ": "; cin >> x;
		Grade g(x);
		a[i] = g.grade_point();
		credit_hour=g.gettotal_ch();		
	}
	
	for(int i=0;i<n;i++){
		GPA = GPA + a[i];
	}
	GPA = GPA/credit_hour;
	cout << "\nYour GPA is " << GPA;
	
return 1;	
}
