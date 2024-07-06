class Solution{
  public:
   
    string multiplyStrings(string s1, string s2) {
    //stoi() function is used to convert string into number 

     long long  num1 = stoi(s1);
     long long num2 = stoi(s2);
     
     long long  mul= num1 * num2 ;
     
     //Using std::to_string to convert number to string
     string product = to_string(mul);
     
     return product;
    }

};
/*
TC : O(n)
SC : O(1)

//optimize solution

