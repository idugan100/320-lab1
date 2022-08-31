#include <array>
using namespace std;
void delsort(int array[]){
    int size=sizeof(array);
    
    for(int j=0;j<size-1;j++){
        int minIndex=j;
        int marker=j;
        for(int i=j;i<size;i++){
            if(array[i]<array[minIndex]){
                minIndex=i;
            }
        }
        swap(array[minIndex],array[marker]);

        for(int i=0; i<size;i++){
            cout<<array[i]<<" ";
        }
        cout <<endl;
    }


        

    
    
   
   
    

}