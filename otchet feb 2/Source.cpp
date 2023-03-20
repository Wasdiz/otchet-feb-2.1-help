#include <iostream>
#include <cstdlib>
#include <vector>
#include <iomanip>
using namespace std;

int main() {

	srand(time(NULL));
	int check_numbers = 0;
	int VuserNumber = 0;
	double Vnumbers = 0;
	int a= 0;
	int b=0;
	double c=0;
	double d=0;
	int counter_drob = 0;
	cout << "write value vector-> ";
	cin >> VuserNumber;
	cout << endl;

	vector<vector<double>> V(VuserNumber);

	for (int i = 0;i < V.size();i++) {
	
		for (int j = 0; j < V.size();j++) {
		
			Vnumbers = (-900 + rand() % 10900)*0.01;
			V[i].push_back(Vnumbers);
				V[j].push_back(Vnumbers);

				cout << setw(6);
				cout << fixed;
				cout << setprecision(2)<< " | " << V[i][j]<<" | ";

			
				

				
				while (check_numbers == 0) {

					c = (int)V[a][b];

					d = (V[a][b] - c);

					if (d <= 0.11) {
					
						counter_drob++;
					
					}
					b++;
					if (V[a][b] == V[a][j]) {

						b = 0;
						a++;

					}


					if (V[a][b] == V[i][j]) {

						check_numbers = 1;

					}

				}

			
			
		
		}
	



	}
cout <<counter_drob<< endl;



}