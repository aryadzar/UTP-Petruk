#include <iostream>
#include <cmath>

using namespace std;

// bool hasTwoSum(int nums[], int n, int k){
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(nums[i]+nums[j]==k){
//                 return true;
//             }
//         }
//     }
//     return false;

// }

// int tambah(int a, int b){
//     return a + b;
// }

// double luaslingkaran(double r){
//     double pi = M_PI;
//     return pi * r * r;
// }

// int tambah(int a, int b){
//     return a + b;
// }
// int kurang(int a, int b){
//     return a - b;
// }

int main() {

    // int (*ptr[]) (int,int)= {tambah, kurang};

    // for (int i=0; i<2 ; i++) {
    //     cout<<"Hasilnya Adalah "<<(*ptr[i])(10,5)<<endl;
    // }
    // int nomor[4] = {10,20,30,40};

    // int n = 4;
    // int k = 10;

    // cout<<hasTwoSum(nomor,n,k);

    // int x = 5, y = 7, hasil;

    // hasil = tambah(x,y);
    // cout<<hasil<<endl;

    // double r;

    // cin>>r;
    // cout<<"Luas Lingkaran : "<<luaslingkaran(r)<<endl;



    return 0;
}

// #include <iostream>

// using namespace std;

// int main(){
	
// 	int n, m, o, p;
	
// 	cin>>n>>m;
// 	int matr[n][m];
	
// 	for(int i = 0; i < n ; i++){
// 		for(int j = 0 ; j < m ; j++){
			
// 			cin>>matr[i][j];
// 		}
// 	}
	
// 	cin>>o>>p;
// 	int matr2[o][p];
	
// 	if (n != p && m != o){
// 		cout<<"Perkalian matriks tidak dapat dilakukan";
// 		return 0 ; 
// 	}
	
// 	for(int i = 0 ; i < o ; i++){
// 		for(int j = 0 ; j < p ; j++){
// 			cin>>matr2[i][j];
// 		}
// 	}
// 	int matr3[n][p];
	
// 	for (int i = 0 ; i < n ; i++){
// 		for (int j = 0; j < p; j++){
// 			matr3[i][j] = 0;
// 			for (int k = 0 ; k < m ; k++){
// 				matr3[i][j] += matr[i][k] * matr2[k][j];
// 			}
// 		}
// 	}
	
// 	for(int i = 0; i < n ; i ++){
// 		for (int j = 0 ; j < p ; j++){
// 			cout<<matr3[i][j]<<" ";
// 		}
// 		cout<<endl;
// 	}
	
// 	return 0 ;	
// }

// void vPtr(void* p, char type)
// {
//     if (type == 'i')
//     {
//         for (int i = 0; i < *(int *)p;i++) {
//             cout << "ing" << endl;
//         }
//     }
//     else if (type == 'c')
//     {
//         cout << "ceng " << *(char*)p << endl;
//     }
// }

// #include <iostream>
// #include <cmath>

// using namespace std;


// double jarak(double x1, double y1, double y2, double x2){
// 	double d = sqrt(pow(x2 - x1,2) + pow(y2 - y1, 2));
// 	return d;
// }

// int main(){
    
// float a, b, c, d;

// cin>>a>>b>>c>>d;

// cout<<jarak(a,b,c,d);
    
// }

// Sn = n/2 (2a + (n – 1) b)

// void deret(int a, int d, int n) {
//     int has = (n*(2 * a + (n - 1) * d))/2;
//     cout<<has;
// }

// void baris(int a, int d, int n) {
//     int temp = 0;
//     for (int i = 1; i <= n; i++) {
//         temp = a + (i-1) * d;
//         if(temp>=0){
//         cout << temp << " ";
//         }
//         else{
//         cout<<"Not Found";
//         exit(0);
//         }
//     }
//     cout << endl;
// }
// void hitungRerata(){
// 	float n, m, sum; 
// 	cin>>n;
	
// 	for(int i = 0; i < n; i++){
// 		cin>>m;
// 		sum+=m;
// 	}
	
// 	cout<<sum/n;
// }

// void tukar(int &a, int &b, int &c){
//     int temp = 0;
	
// 	if(a > b){
// 		temp = a;
// 		a = b;
// 		b = temp;
//     }
//     if(a > c){
//     	temp = a;
//     	a = c;
//     	c = temp;
//     }
//     if(b > c){
//         temp = b;
//         b = c;
//         c = temp;
//     }
// }
// int fib(int n){
//     if (n == 0 || n == 1){
//         return n;
//     } else {
//         return fib(n-2) + fib(n-1);
//     }
// // }
// #include <iostream>

// using namespace std;

// int main(){
//     // char name[15], npm[10];

//     // cin.get(name,15);
//     // cin.ignore();
//     // cin.get(npm,10);

//     // cout << name << " " << npm << endl;

//     // char karakter;
//     // while (cin.get(karakter)){
//     //     if (karakter == 'a')
//     //         cin.putback('x');
//     //     else 
//     //         cout<<karakter;

//     // }

//     // char str[] = {'i','k','l','o','p','o','l','\0'};

//     // cout<<str<<endl;
//     // cout<<strlen(str)<<endl;
//     // return 0;

//     // char firstname[50] = "Muhammad Arya Dzaky";
//     // char lastname[50] = " Arenanto";
//     // char *fullname = strcat(firstname,lastname);
//     // cout << fullname << endl;

//     char *endptr;
//     char str1[] = "12321232Aryan";
//     // long value = strtol(str1, &endptr, 10);
//     long value = strtod(str1 , &endptr);
//     cout<<value<<endl;
//     cout<<endptr<<endl;

//     return 0;

// }




