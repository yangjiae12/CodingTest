#include <iostream>
using namespace std;

int main() {
    
    /*
    for문을 쓰는 걸 생각했는데, 그것보단 수식으로 계산하는 게 더욱 효율적
    다른 문제들도 for문으로 하나씩 대입하는 것보다 수식을 끌어내서 해보자..
    */
    
    int t;
    cin >> t;
    
    while (t--) {
        int h, w, n;
        cin >> h >> w >> n;
        
        int floor = 1; 
        int room = 1;
        
        for (int i = 1; i < n; i++) {
            floor++;
            if (floor > h) {
                floor = 1;
                room++;
            }
        }
        
        cout << floor * 100 + room << endl;
    }
    
    return 0;
}