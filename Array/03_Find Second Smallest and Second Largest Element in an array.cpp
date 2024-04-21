
int SecondL(int n, vector<int> a)
{
 int largest = a[0];
    int secondL = INT_MIN;

    for(int i = 0; i < n; i++) {
        if(a[i] > largest) {
            secondL = largest;
            largest = a[i];
        } else if(a[i] < largest && a[i] > secondL) {
            secondL = a[i];
        }
    }

    return secondL;
}
int SecondS(int n, vector<int> a)
{
     int smallest = a[0];
    int secondS = INT_MAX;

    for(int i = 0; i < n; i++) {
        if(a[i] < smallest) {
            secondS = smallest;
            smallest = a[i];
        } else if(a[i] >smallest&& a[i] <secondS) {
            secondS = a[i];
        }
    }

    return secondS;
}
vector<int> getSecondOrderElements(int n, vector<int> a) {
    int second_S = SecondS(n, a);
    int second_L = SecondL(n, a);

    return {second_L, second_S};
}

