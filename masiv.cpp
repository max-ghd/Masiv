/* #include <iostream> 


using namespace std;

int main()
{
	
	const int SIZE = 5;
	int ar[SIZE] = {1, 2, 3, 4, 5};
	

	for (int i = 0; i < SIZE; i++) {
		
		cout << ar[i];
	}
	cout << "\n";
	for(int j = SIZE - 1; j >= 0; j--)
	{
		cout << ar[j];
	}
	
	
}

*/





/*#include <iostream> 
#include <ctime>


using namespace std;

int main()
{
	srand(time(0));
	const int SIZE = 20;
	int ar[SIZE];


	for (int i = 0; i < SIZE; i++) {
		ar[i] = rand() % 20;

		if (ar[i] % 2 == 0) {
			cout << ar[i]<<", ";
		}

		
	}



}
*/

/* #include <iostream> 
#include <ctime>


using namespace std;

int main()
{
	srand(time(0));
	const int SIZE = 10;
	int ar[SIZE];
	int sum = 0;

	for (int i = 0; i < SIZE; i++) {
		ar[i] = rand() % 41 - 20;
		if (ar[i] > 0) {
			cout << ar[i]<<", ";
			sum += ar[i];
			
		}
	}
	cout << "\n";

	cout << "Suma: " << sum << "\n";


}
*/




/*#include <iostream> 
#include <ctime>


using namespace std;

int main()
{
	srand(time(0));
	const int SIZE = 100;
	char ar[SIZE];

	int cyfra = 0;
	int letters = 0;
	int punktacja = 0;

	for (int i = 0; i < SIZE; i++) {
		ar[i] = rand() % 94+33;
		cout << ar[i] << ", ";
		if (ar[i] >= '0' && ar[i] <= '9') {
			cyfra++;

		}
		else if ((ar[i] >= 'a' && ar[i] <= 'z') || (ar[i] >= 'A' && ar[i] <= 'Z')) {
			letters++;
		}

		else if ((ar[i] >= 33 && ar[i] <= 47) || (ar[i] >= 58 && ar[i] <= 64) || 
			(ar[i] >= 91 && ar[i] <= 96) || (ar[i] >= 123 && ar[i] <= 126)) {
			  punktacja++;
		}
	}
	cout << "\n";

	cout << "CYFRY: " << cyfra << "\n";
	cout << "LETTERSY: " << letters << "\n";
	cout << "PUNKTACJA: " << punktacja << "\n";
}
*/





/*#include <iostream> 
#include <ctime>


using namespace std;

int main()
{
	srand(time(0));
	const int SIZE = 100;
	int ar[SIZE];

	int cyfra = 0;
	int cyfra_koryst;
	cout << "Write your number: ";
	cin >> cyfra_koryst;

	for (int i = 0; i < SIZE; i++) {
		ar[i] = rand() % 100;
		cout << ar[i] << ", ";
		if (ar[i] == cyfra_koryst) {
			cyfra++;
		}
	}
	cout << "\n";

	cout << "CYFRA KORYST MEET TIME: " << cyfra;

}
*/

/* #include <iostream> 
#include <ctime>


using namespace std;

int main()
{
	srand(time(0));
	const int SIZE = 20;
	int ar[SIZE];
	int persze_number = -1;
	int sum = 0;

	for (int i = 0; i < SIZE; i++) {
		ar[i] = rand() % 41 - 10;
		cout << ar[i] << ", ";

	}

	for (int i = 0; i < SIZE; i++) {
		if (ar[i] < 0) {
			persze_number = i;
			break;
		}
	}

	for (int i = persze_number + 1; i < SIZE; i++) {
		sum += ar[i];
	}
	cout << "\n";

	cout << "Suma Posle pierszego number: " << sum;

}
*/


/*#include <iostream> 
#include <ctime>


using namespace std;

int main()
{
	srand(time(0));
	const int SIZE = 20;
	int ar[SIZE];
	
	int sum = 0;

	for (int i = 0; i < SIZE; i++) {
		ar[i] = rand() % 41 - 30;
		cout << ar[i] << ", ";

	}

	for (int i = 0; i < SIZE; i++) {
		if (ar[i] > 0) {
			break;
		}
		sum += ar[i];
	}

	

	cout << "Suma Posle pierszego number: " << sum;

}
*/

//Двовимірний масив

/* #include <iostream>
#include <ctime>


using namespace std;

int main()
{
	srand(time(0));

	const int ROW = 2;
	const int COL = 3;

	int ar[ROW][COL];
	int sum = 0;
	int arfm = 0;
	int total = 0;
	ar[0][0] = rand() % 20;
	int min = ar[0][0];
	int max = ar[0][0];
	


	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL; j++) {
			ar[i][j] = rand() % 20;
			cout << ar[i][j]<<" ";
			sum += ar[i][j];
			total++;
			if (ar[i][j] < min) {
				min = ar[i][j];
			}
			else if (ar[i][j] > max) {
				max = ar[i][j];
			}
			
			
		}
		
		cout << endl;
	}
	cout << "\n";
	cout <<"SUMA: "<< sum << "\n";
	arfm = sum / total;
	cout << "SEREDNIA: "<< arfm << "\n";
	cout <<"MIN; "<< min << "\n";
	cout << "MAX: "<< max;
	
}*/


 
/* #include <iostream>
#include<iomanip>
#include <ctime>


using namespace std;

int main()
{
	srand(time(0));

	const int ROW = 5;
	const int COL = 5;

	int ar[ROW][COL];
	int sum = 0;
	int sum1 = 0;


	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL; j++) {
			ar[i][j] = rand() % 20;
			cout << setw(5) << ar[i][j]<< " ";
			 
		}
		cout << "\n";
	}

	for (int i = 0; i < ROW; i++) {
		sum += ar[i][i];
	}

	for (int i = 0; i < ROW; i++) {
		sum1 += ar[i][ROW - 1 - i];
	}
	cout << "\n";
	cout << sum << "\n";
	cout << sum1 << "\n";



}*/

/* #include <iostream>
#include<iomanip>
#include <ctime>


using namespace std;

int main()
{
	srand(time(0));

	const int ROW = 5;
	const int COL = 5;

	int ar[ROW][COL];
	int negative = 0;
	int pozitive = 0;
	int null = 0;

	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL; j++) {
			ar[i][j] = rand() % 21 - 10;
			cout << setw(5) << ar[i][j] << " ";
			if (ar[i][j] > 0) {
				pozitive++;
			}
			else if(ar[i][j]<0){
				negative ++;
			}
			else {
				null++;
			}


		}
		cout << "\n";


	}
	cout << "\n";
	cout << "NEGATIVE: " << negative<<"\n";
	cout << "POZITIVE: " << pozitive << "\n";
	cout << "NULL: " << null << "\n";



}
*/

/* #include <iostream>
#include<iomanip>
#include <ctime>


using namespace std;

int main()
{
	srand(time(0));

	const int ROW = 3;
	const int COL = 3;

	int ar[ROW][COL];
	int sum0_ROW = 0;
	int sum1_ROW = 0;
	int sum2_ROW = 0;
	int sum0_COL = 0;
	int sum1_COL = 0;
	int sum2_COL = 0;

	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < ROW; j++) {
			ar[i][j] = rand() % 20;
			cout << setw(3) << ar[i][j] << " ";
			if (j == 0) {
				sum0_COL += ar[i][j];

			}
			else if (j == 1) {
				sum1_COL += ar[i][j];

			}
			else if (j == 2) {
				sum2_COL += ar[i][j];

			}
			
			if (i == 0) {
				sum0_ROW += ar[i][j];
			}
			else if (i == 1) {
				sum1_ROW += ar[i][j];
			}
			else if (i == 2) {
				sum2_ROW += ar[i][j];
			}
			
		}
		cout << "\n";
	}
	cout << "\n";
	cout <<"SUMA ONE COL: "<< sum0_COL<<"\n";
	cout << "SUMA TWO COL: " << sum1_COL << "\n";
	cout << "SUMA THREE COL: " << sum2_COL << "\n";
	cout << "SUMA ONE ROW: " << sum0_ROW << "\n";
	cout << "SUMA TWO ROW: " << sum1_ROW << "\n";
	cout << "SUMA THREE ROW: " << sum2_ROW << "\n";

}*/

/* #include <iostream>
#include<iomanip>
#include <ctime>


 using namespace std;

int main()
{
	srand(time(0));

	const int ROW = 3;
	const int COL = 3;

	int ar[ROW][COL];

	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL; j++) {
			ar[i][j] = i * 10 + j;
			cout <<setw(3)<< ar[i][j]<<" ";
		}

		cout << "\n";
	}
	
	
}*/

